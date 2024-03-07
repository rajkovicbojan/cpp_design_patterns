#include <iostream>
#include "text.h"
#include <memory>
using namespace std;

int main(int argc, char const *argv[])
{
    char page_data[]="Page data";
    char front_page_data[]="Front page";
    int page_size =20;
    int front_page_size =21;

    
    text* doc = new document;
    text* front_page = new document;
    text* chapter_1 = new document;
   
    handwritten_text* h_txt=new handwritten_text(front_page_size, front_page_data);
    printed_text* p_txt=new printed_text(page_size, page_data);
     
    front_page->add(h_txt);
    chapter_1->add(p_txt);
    chapter_1->add(p_txt);
    chapter_1->add(p_txt);

    doc->add(front_page);
    doc->add(chapter_1);

    doc->printText();

    return 0;
}

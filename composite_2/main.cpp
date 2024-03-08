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

      
    handwritten_text h_txt(front_page_size, front_page_data);
    printed_text p_txt(page_size, page_data);
    
    document doc2;
    document doc;


    doc2.add(h_txt);
    doc2.add(p_txt);
    
    doc.add(doc2);
    doc.add(p_txt);
    

    doc.printText();

    return 0;
}
;
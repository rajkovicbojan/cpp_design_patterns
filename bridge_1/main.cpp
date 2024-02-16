#include <iostream>
#include "text.h"
#include "text_style.h"
#include <memory>
using namespace std;

int main(int argc, char const *argv[])
{
    bold_text_style bold;
    italic_text_style italic;
    
    std::unique_ptr<text> paragrafs[]
    {
        std::make_unique<handwritten_text>(bold),
        std::make_unique<handwritten_text>(italic),
        std::make_unique<printed_text>(bold),
        std::make_unique<printed_text>(italic)
    };

    for(auto &paragraf : paragrafs)
    {
        paragraf->setStyle();
    }
    return 0;
}

#ifndef TEXT_H
#define TEXT_H

#include "text_style.h"

class text
{
protected:
    /* data */
    text_style &style;

public:
    text(text_style &s);
    ~text();
    virtual void setStyle(void)=0;
};

text::text(text_style &s) : style(s)
{
}

text::~text()
{
}

//===========================================
class handwritten_text: public text
{
private:
    /* data */
public:
    handwritten_text(text_style &s);
    ~handwritten_text();

    void setStyle()
    {
        std::cout<<"Handwritten text\n";
        style.setStyle();
    }
};

handwritten_text::handwritten_text(text_style &s) : text(s)
{

}

handwritten_text::~handwritten_text()
{
    
}

//===========================================
class printed_text: public text
{
private:
    /* data */
public:
    printed_text(text_style &s);
    ~printed_text();

    void setStyle()
    {
        std::cout<<"Printed text\n";
        style.setStyle();
    }
};

printed_text::printed_text(text_style &s) : text(s)
{

}

printed_text::~printed_text()
{
    
}

#endif
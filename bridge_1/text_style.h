#ifndef TEXT_STYLE_H
#define TEXT_STYLE_H

class text_style
{
private:

public:

    text_style();
    ~text_style();

    virtual void setStyle(void)=0;
};


text_style::text_style()
{
}


text_style::~text_style()
{
}

//==========================================
class bold_text_style : public text_style
{
private:
    /* data */
public:
    bold_text_style(/* args */);
    ~bold_text_style();

    void setStyle(void) override
    {
        std::cout<<"Style is bold"<<"\n";
    }
};

bold_text_style::bold_text_style(/* args */)
{
}

bold_text_style::~bold_text_style()
{}


//==========================================
class italic_text_style : public text_style
{
private:
    /* data */
public:
    italic_text_style(/* args */);
    ~italic_text_style();

    void setStyle(void) override
    {
        std::cout<<"Style is italic"<<"\n";
    }
};

italic_text_style::italic_text_style()
{}

italic_text_style::~italic_text_style()
{}
#endif
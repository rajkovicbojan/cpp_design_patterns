#ifndef TEXT_H
#define TEXT_H

#include "stdio.h"
#include <cstring>
#include <vector>

class text
{
protected:
    /* data */
    const int size=10;
    char* raw_text=nullptr;

public:
    text(int s_size, char* s_raw_text ); 
    text()=default;
    
    ~text()=default;
    virtual void printText(void)=0;
    virtual void add(text *t){};
};

text::text(int s_size, char* s_raw_text ) : size(s_size), raw_text(s_raw_text)
{
}
//===========================================
class handwritten_text: public text
{
private:
    /* data */
public:
    handwritten_text(int s_size, char* s_text);
    ~handwritten_text();

    void printText() override
    {
        int i, j;
        int len = strlen(raw_text);

        // Print the top border
        for (i = 0; i < size; i++) {
            std::cout<<("-");
        }
        std::cout<<("\n");

        // Print the sides with text
        for (i = 0; i < size - 2; i++) {
            std::cout<<("|");
            if (i == (size - 2) / 2) {
                // Print the text in the middle row
                int spaces = (size - len - 2) / 2;
                for (j = 0; j < spaces; j++) {
                    std::cout<<("~");
                }
                std::cout<<("%s", raw_text);
                for (j = 0; j <= spaces; j++) {
                    std::cout<<("~");
                }
            } else {
                // Print spaces for other rows
                for (j = 0; j < size - 2; j++) {
                    std::cout<<("~");
                }
            }
            std::cout<<("|\n");
        }

        // Print the bottom border
        for (i = 0; i < size; i++) {
            std::cout<<("-");
        }
        std::cout<<("\n");
    }
};

handwritten_text::handwritten_text(int s_size, char* s_raw_text) : text(s_size, s_raw_text)
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
    printed_text(int s_size, char* s_raw_text);
    ~printed_text();

    void printText() override
    {
        int i, j;
        int len = strlen(raw_text);

        // Print the top border
        for (i = 0; i < size; i++) {
            std::cout<<("-");
        }
        std::cout<<("\n");

        // Print the sides with text
        for (i = 0; i < size - 1; i++) {
            std::cout<<("|");
            if (i == (size - 2) / 2) {
                // Print the text in the middle row
                int spaces = (size - len - 2) / 2;
                for (j = 0; j < spaces; j++) {
                    std::cout<<(".");
                }
                std::cout<<("%s", raw_text);
                for (j = 0; j <= spaces; j++) {
                    std::cout<<(".");
                }
            } else {
                // Print spaces for other rows
                for (j = 0; j < size - 2; j++) {
                    std::cout<<(".");
                }
            }
            std::cout<<("|\n");
        }

        // Print the bottom border
        for (i = 0; i < size; i++) {
            std::cout<<("-");
        }
        std::cout<<("\n");
    }
};

printed_text::printed_text(int s_size, char* s_raw_text) : text(s_size, s_raw_text)
{

}


printed_text::~printed_text()
{
    
}
//========================================
class document : public text
{
    public:
        std::vector<text*> textDocument;

        document();
        void add(text *t) override
        {
            this->textDocument.push_back(t);
        }
        void printText() override
        {
            for(auto& t :textDocument)
            {
                t->printText();
            }
        }   

};
document::document() : text()
{

}
#endif
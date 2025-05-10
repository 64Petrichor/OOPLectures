#include <iostream>

using namespace std;

class button{
    public:
        virtual void paint() = 0;
};
class winButton : public button {
    public:
        void paint() {
            cout << "Window button \n";
        }
};
class macButton : public button {
    public:
        void paint() {
            cout << "Mac button \n";
        }
};

class scrollBar {
    public:
        virtual void paint() = 0;
};
class winScrollBar : public scrollBar {
    public:
        void paint () {
            cout << "Windows Scroll Bar \n";
        }
};
class macScrollBar : public scrollBar {
    public:
        void paint () {
            cout << "Mac Scroll Bar \n";
        }
};

class widgetFactory {
    public:
        virtual button* createButton () = 0;
        virtual scrollBar* createScrollBar () = 0;
};
class winFactory : public widgetFactory {
    public:
        button* createButton () {
            return new winButton;
        }
        scrollBar* createScrollBar () {
            return new winScrollBar;
        }
};
class macFactory : public widgetFactory {
    public:
        button* createButton () {
            return new macButton;
        }
        scrollBar* createScrollBar () {
            return new macScrollBar;
        }
};

int main() {
    widgetFactory* widgetFactory;
    button* btn;
    scrollBar* sb;

    widgetFactory = new macFactory;
    btn = widgetFactory->createButton();
    sb = widgetFactory->createScrollBar();
    btn->paint();
    sb->paint();
    
    widgetFactory = new winFactory;
    btn = widgetFactory->createButton();
    sb = widgetFactory->createScrollBar();
    btn->paint();
    sb->paint();
    
    return 0;
}
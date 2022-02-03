#include <iostream>
using namespace std;
class cwh
{
protected:
    string title;
    float rating;

public:
    cwh(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; //do nothing function------->pure virtual function
};
//Due to pure virtual function has been created the derived class must have display function in it.
//this is used to create abstract class.
//when the class contains pure virtual function then it is called abstract class.
class cwhvideo : public cwh
{
    int videolength;

public:
    cwhvideo(string s, float r, int vl) : cwh(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is amazing video " << title << endl;
        cout << "This video has rating  " << rating << endl;
        cout << "The length of video is  " << videolength << endl;
    }
};
class cwhtext : public cwh
{
    int words;

public:
    cwhtext(string s, float r, int wc) : cwh(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is amazing text " << title << endl;
        cout << "This text has rating  " << rating << endl;
        cout << "The length of text is  " << words << endl;
    }
};
int main()
{
    string title;
    float rating;
    int videol, words;

    //for video
    title = "C++ tutorial";
    videol = 35;
    rating = 9.99;
    cwhvideo video(title, rating, videol);
    // video.display();

    //for text
    title = "C++ tutorial text";
    words = 350;
    rating = 4.99;
    cwhtext text(title, rating, words);
    //text.display();

    cwh *tuts[2];
    tuts[0] = &video;
    tuts[1] = &text;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}
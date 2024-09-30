// COMSC-210 | Lab 15: Movie Class | Yukun Zhang
// IDE used: Visual Studio Code

#include <iostream>
#include <iomanip>
#include <vector> 
#include <fstream> 
using namespace std; 

class Movie{
    private: 
    int yearReleased;
    string screenWriter, title;
    public:
    Movie(string screenWriter, int yearReleased, string title)
        :screenWriter(screenWriter), yearReleased(yearReleased), title(title){}
    //Setter and getter
    void setYearReleased(int yearReleased){this->yearReleased = yearReleased;}
    void setScreenWriter(string screenWriter){this->screenWriter = screenWriter;}
    void setTitle(string title){this->title = title;}
    int getYearReleased(){return yearReleased;}
    string getScreenWriter(){return screenWriter;}
    string getTitle(){return title;}

    void print(){
        cout<<"Movie: "<<title<<endl;
        cout<<"    Year released: "<<yearReleased<<endl;
        cout<<"    Screenwriter: "<<screenWriter<<endl;
    }
};
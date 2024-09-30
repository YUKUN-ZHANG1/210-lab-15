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
    int getYearReleased()const{return yearReleased;}
    string getScreenWriter()const{return screenWriter;}
    string getTitle()const{return title;}

    void print()const{
        cout<<"Movie: "<<title<<endl;
        cout<<"    Year released: "<<yearReleased<<endl;
        cout<<"    Screenwriter: "<<screenWriter<<endl;
    }
};

int main(){
    vector<Movie> movies; // Vector to store Movie objects
    ifstream inputFile("movies.txt");
    if (!inputFile) {
        cerr << "Error: Unable to open file." << endl;
        return 1;
    }
    string title, screenWriter;
    int yearReleased;

    // Reading data from file and storing in vector
    while (getline(inputFile, title)) {
        inputFile >> yearReleased;
        inputFile.ignore(); // Ignore the newline after the year
        getline(inputFile, screenWriter);
        movies.push_back(Movie(screenWriter, yearReleased, title)); // Store movie object
    }
    inputFile.close();

    // Output the contents of the vector
    for (const auto& movie : movies) {
        movie.print();
        cout << endl;
    }

    return 0;
}
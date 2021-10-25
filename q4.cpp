#include <iostream> 
#include <cstdlib> // for exit()
#include <cctype>  // for tolower()

using namespace std;

class Month
{
private:
  int mnth;
public:
  Month(); 
  Month(char c1, char c2, char c3) {
    if (c1 == 'j' && c2 == 'a' && c3 == 'n') 
      mnth = 1;
    else if (c1 == 'f' && c2 == 'e' && c3 == 'b')
      mnth = 2;
    else if (c1 == 'm' && c2 == 'a' && c3 == 'r')
      mnth = 3;
    else if (c1 == 'a' && c2 == 'p' && c3 == 'r')
      mnth = 4;
    else if (c1 == 'm' && c2 == 'a' && c3 == 'y')
      mnth = 5;
    else if (c1 == 'j' && c2 == 'u' && c3 == 'n') 
      mnth = 6;
    else if (c1 == 'j' && c2 == 'u' && c3 == 'l') 
      mnth = 7;
    else if (c1 == 'a' && c2 == 'u' && c3 == 'g')
      mnth = 8;
    else if (c1 == 's' && c2 == 'e' && c3 == 'p')
      mnth = 9;
    else if (c1 == 'o' && c2 =='c' && c3 == 't')
      mnth = 10;
    else if (c1 == 'n' && c2 =='o' && c3 == 'v')
      mnth = 11;
    else if (c1 == 'd' && c2 == 'e' && c3 == 'c')
      mnth = 12;
    else {
      cout << c1 << c2 << c3 << " is not a month.";
    }  
  }
  Month(int monthNumber) { 
    mnth = monthNumber; 
  }           
  void getMonthByNumber(istream& in) { 
    in >> mnth;
  }
  void getMonthByName(istream& in) {
    char c1, c2, c3;
    in >> c1 >> c2 >> c3;
    c1 = tolower(c1);
    c2 = tolower(c2);
    c3 = tolower(c3);
    if (c1 == 'j' && c2 == 'a' && c3 == 'n') 
      mnth = 1;
    else if (c1 == 'f' && c2 == 'e' && c3 == 'b')
      mnth = 2;
    else if (c1 == 'm' && c2 == 'a' && c3 == 'r')
      mnth = 3;
    else if (c1 == 'a' && c2 == 'p' && c3 == 'r')
      mnth = 4;
    else if (c1 == 'm' && c2 == 'a' && c3 == 'y')
      mnth = 5;
    else if (c1 == 'j' && c2 == 'u' && c3 == 'n') 
      mnth = 6;
    else if (c1 == 'j' && c2 == 'u' && c3 == 'l') 
      mnth = 7;
    else if (c1 == 'a' && c2 == 'u' && c3 == 'g')
      mnth = 8;
    else if (c1 == 's' && c2 == 'e' && c3 == 'p')
      mnth = 9;
    else if (c1 == 'o' && c2 =='c' && c3 == 't')
      mnth = 10;
    else if (c1 == 'n' && c2 =='o' && c3 == 'v')
      mnth = 11;
    else if (c1 == 'd' && c2 == 'e' && c3 == 'c')
      mnth = 12;
    else {
      cout << c1 << c2 << c3 << " is not a month.";
    }  
  }   
  void outputMonthNumber(ostream& out) { 
    out << mnth;
  }
  void outputMonthName(ostream& out) {
    if (mnth == 1) out << "Jan";
    else if (mnth == 2) out << "Feb";
    else if (mnth == 3) out << "Mar";
    else if (mnth == 4) out << "Apr";
    else if (mnth == 5) out << "May";
    else if (mnth == 6) out << "Jun";
    else if (mnth == 7) out << "Jul";
    else if (mnth == 8) out << "Aug";
    else if (mnth == 9) out << "Sep";
    else if (mnth == 10) out << "Oct";
    else if (mnth == 11) out << "Nov";
    else if (mnth == 12) out << "Dec";
  }
  Month nextMonth(istream& in) {
    in >> mnth;
    int nextMonth;
    if (mnth == 12) {
      nextMonth = 1;
    }
    else {
      nextMonth = mnth + 1;
    }
    return nextMonth;
  }
};

int main() {
  
  cout << "Testing constructor Month(char, char, char): " << endl;
  Month m1 ('j', 'a', 'n');
  m1.outputMonthNumber(cout); cout << " ";
  m1.outputMonthName(cout); cout << endl;
  Month m2 ('f', 'e', 'b');
  m2.outputMonthNumber(cout); cout << " ";
  m2.outputMonthName(cout); cout << endl;
  Month m3('m', 'a', 'r');
  m3.outputMonthNumber(cout); cout << " ";
  m3.outputMonthName(cout); cout << endl;
  Month m4('a', 'p', 'r');
  m4.outputMonthNumber(cout); cout << " ";
  m4.outputMonthName(cout); cout << endl;
  Month m5('m', 'a', 'y');
  m5.outputMonthNumber(cout); cout << " ";
  m5.outputMonthName(cout); cout << endl;
  Month m6('j', 'u', 'n');
  m6.outputMonthNumber(cout); cout << " ";
  m6.outputMonthName(cout); cout << endl;
  Month m7('j', 'u', 'l');
  m7.outputMonthNumber(cout); cout << " ";
  m7.outputMonthName(cout); cout << endl;
  Month m8('a', 'u', 'g');
  m8.outputMonthNumber(cout); cout << " ";
  m8.outputMonthName(cout); cout << endl;
  Month m9('s', 'e', 'p');
  m9.outputMonthNumber(cout); cout << " ";
  m9.outputMonthName(cout); cout << endl;
  Month m10('o', 'c', 't');
  m10.outputMonthNumber(cout); cout << " ";
  m10.outputMonthName(cout); cout << endl;
  Month m11('n', 'o', 'v');
  m11.outputMonthNumber(cout); cout << " ";
  m11.outputMonthName(cout); cout << endl;
  Month m12('d', 'e', 'c');
  m12.outputMonthNumber(cout); cout << " ";
  m12.outputMonthName(cout); cout << endl;

  cout << "\nTesting constructor Month(int): " << endl;
  int i = 1;
  while ( i <= 12) {
    Month ma(i);
    ma.outputMonthNumber(cout); cout << " ";
    ma.outputMonthName(cout); cout << endl;
    i++;
  }

  cout << "\nTesting the getMonthByName and outputMonth." << endl <<
          "Enter the first three letters of a month (Jan through Dec): " << endl;
  i = 1;
  while (i <=12) {
    m1.getMonthByName(cin);
    cout << "The result of the three letter month input is: ";
    m1.outputMonthNumber(cout); cout << endl;
    i++;
  }
    
  cout << "\nTesting getMonthByNumber and outputMonth." << endl <<
                  "Enter the number of the months (1 through 12): " << endl;
  i = 1;
  while (i <=12) {
    m1.getMonthByNumber(cin);
    cout << "The result of the number month input is: ";
    m1.outputMonthName(cout); cout << endl; 
    i++;
  }

  cout << "\nTesting nextMonth." << endl <<
          "Enter the number of the months (1 through 12) to find the next month: " << endl;
  i = 1;
  while (i <=12) {
    m1 = m1.nextMonth(cin);
    cout << "The next month is: ";
    m1.outputMonthNumber(cout); cout << " "; 
    m1.outputMonthName(cout); cout << endl; 
    i++;
  }
  return 0;
}

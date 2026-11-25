#include <iostream>
#include <vector>
#include <windows.h>
#include <unordered_map>

#define plithos_etwn 18

using namespace std;

class DILIS
{
private:
    int day, month, year;

public:
    /*Ftiaxnw me ton constructora to proion*/
    DILIS(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    /*Getters */
    /*       */
    int get_day()
    {
        return day;
    }
    /*       */
    int get_month()
    {
        return month;
    }
    /*       */
    int get_year()
    {
        return year;
    }
    /*       */
};
int main()
{
    int count, day, month, year;
    cout << "Posa Prointa Tha Ftiaxeis??" << endl;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cout << "----------------------" << endl;
        cout << "Vale Mera Prointos" << endl;
        cin >> day;
        cout << "----------------------" << endl;
        cout << "Vale Mhna Proiontos" << endl;
        cin >> month;
        cout << "----------------------" << endl;
        cout << "Vale Xrono Prointos" << endl;
        cin >> year;
        DILIS D(day, month, year);
        //
        //
        SYSTEMTIME st;
        GetLocalTime(&st);
        cout << "----------------------" << endl;
        cout << "H Hmeromina Pou Kataxwreises Ta Prointa Einai :" << endl;
        cout << st.wDay << "/" << st.wMonth << "/" << st.wYear << endl;
        cout << "----------------------" << endl;
        int diafora;
        //
        //
        string MHNES31[7] = {"Ianouarios", "Martios", "Maios", "Ioulios", "Avgoustos", "Oktovrhs", "Dekemvrios"};
        string MHNES30[4] = {"Aprilios", "Iounios", "Septemvrios", "Noemvrios"};
        if (D.get_year() != 2028 && D.get_year() != 2032 && D.get_year() != 2036)
        {
            cout << "To Etos Den Einai Dysekto" << endl;
            cout << "----------------------" << endl;
            if (st.wYear == D.get_year())
            {
                if (st.wMonth == D.get_month())
                {
                    diafora = D.get_day() - st.wDay;
                    if (diafora <= 2 && diafora >= 0)
                    {
                        cout << "Tha Kaneis Erwthsh Ston Xrhsth " << endl;
                    }
                    else
                    {
                        cout << "Ayto To Proion Einai Komple Exeis Xrono Akomh Na To Katanwlwseis " << endl;
                    }
                }
            }
        }
        else
        {
            cout << "Anaferomai Sta Dysekta Eth" << endl;
        }
    }
    return 0;
}

#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <windows.h>

using namespace std;

// CLASSH
class APP
{
private:
    string Product_Name, areskia;
    long long Product_ID;
    double Weight, Calories, Proteins;
    int day, month, year;

public:
    /*Ftiaxnw me ton constructora to proion*/
    APP(string P_R, string ar, double Wght, double Clrs, double Prtn, int da, int mo, int ye, long long chv)
    {
        Product_Name = P_R;
        areskia = ar;
        Weight = Wght;
        Calories = Clrs;
        Proteins = Prtn;
        day = da;
        month = mo;
        year = ye;
        Product_ID = chv;
    }
    friend ostream &operator<<(ostream &os, const APP &btchk)
    {
        os << "To Onoma Tou Proiontos Einai----> " << btchk.Product_Name << endl;
        os << "--------------------" << endl;
        os << " Sou Aresei Mwrh Loulou?----> " << btchk.areskia << endl;
        os << "--------------------" << endl;
        os << " To Varos Tou Se Kila Einai----> " << btchk.Weight << endl;
        os << "--------------------" << endl;
        os << " Oi Thermides Tou Einai----> " << btchk.Calories << endl;
        os << "--------------------" << endl;
        os << " Oi Prwteines Tou Einai----> " << btchk.Proteins << endl;
        os << "--------------------" << endl;
        os << " H Hmeromhnia Lhjhs Tou Einai---->" << btchk.day << "/" << btchk.month << "/" << btchk.year << endl;
        os << "--------------------" << endl;
        os << " O Kwdikos Tou Einai----> " << btchk.Product_ID << endl;
        os << "--------------------" << endl;
        return os;
    }
};
/*Kommati Sunarthsewn*/
/*          */
/*         */
string epep(string epep)
{
    while (epep != "A" && epep != "B" && epep != "C")
    {
        cout << "Ksanavale Epilogh Broski Mou" << endl;
        cout << "--------------------" << endl;
        cout << "Den ginetai na valeis kati allo pera apo A EITAI B EITAI C" << endl;
        cin >> epep;
    }
    return epep;
}
/*          */
/*         */
double metatroph_varous(string *ep, double *wht)
{
    if (*ep == "A")
    {
        return *wht = *wht / 1000000;
    }
    else if (*ep == "B")
    {
        return *wht = *wht / 1000;
    }
    else
    {
        return *wht;
    }
}
/*          */
/*         */
double eisodos_varous(double wh)
{
    while (wh <= 0)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "Ksanavale Varos" << endl;
        cout << "--------------------" << endl;
        cout << " Thelw Thetiko Kai Oxi Iso Me 0 Varos 'H Arnhtiko Varos" << endl;
        cin >> wh;
    }
    return wh;
}
/*          */
/*         */
double eisodos_thermidwn(double cl)
{
    while (cl <= 0)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "Ksanavale Thermides" << endl;
        cout << "--------------------" << endl;
        cout << " Thelw Thetiko Kai Oxi Iso Me 0 Arithmo Thermidwn 'H Arnhtikes Thermides" << endl;
        cin >> cl;
    }
    return cl;
}
/*          */
/*         */
double eisodos_proteinwn(double pr)
{
    while (pr <= 0)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "Ksanavale Proteines" << endl;
        cout << "--------------------" << endl;
        cout << " Thelw Thetiko Kai Oxi Iso Me 0 Arithmo Prwteinwn 'H Arnhtikes Prwteines" << endl;
        cin >> pr;
    }
    return pr;
}
/*          */
/*         */
long long eisodos_kwdikou(long long pr1)
{
    while (pr1 <= 0)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "Ksanavale Kwdiko" << endl;
        cout << "--------------------" << endl;
        cout << " Thelw Thetiko Kai Oxi Iso Me 0 Kwdiko Prointos 'H Arnhtiko Kwdiko Proionos 'H NA PERIEXEI GRAMMATA" << endl;
        cin >> pr1;
    }
    return pr1;
}
/*          */
/*         */
int eisodos_meras(int da)
{
    while (da < 1 || da > 31)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "Den Ginetai Na Dwseis Auth Thn Mera" << endl;
        cout << "--------------------------------" << endl;
        cout << "Ksanadwse " << endl;
        cin >> da;
    }
    return da;
}
/*          */
/*         */
int eisodos_mhna(int mhn)
{
    while (mhn < 1 || mhn > 12)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "Den Ginetai Na Dwseis Auto Thn Mhna" << endl;
        cout << "--------------------------------" << endl;
        cout << "Ksanadwse " << endl;
        cin >> mhn;
    }
    return mhn;
}
/*          */
/*         */
int eisodos_etos(int et)
{
    while (et < 2026 || et > 3000)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "Den Ginetai Na Dwseis Auto To Etos" << endl;
        cout << "--------------------------------" << endl;
        cout << "Ksanadwse " << endl;
        cin >> et;
    }
    return et;
}
/*          */
/*         */
string saresei(string a1111)
{
    while (a1111 != "Y" && a1111 != "N")
    {
        cout << "Den Ginetai Prepei Na Valeis Kati Apo Thn Lista" << endl;
        cout << "-----------------------------------" << endl;
        cout << "Ksanavale Partale Mou" << endl;
        cin >> a1111;
    }
    return a1111;
}
/*          */
/*         */
string foo_areskias(string foo)
{
    if (foo == "Y")
    {
        cout << "S'Aresei To Proion" << endl;
        return foo;
    }
    else
    {
        cout << "Den Sou Aresei Auto To Proion" << endl;
        return foo;
    }
}
/*          */
/*         */
int main()
{
    cout << "KalwsHrthes Sir" << endl;
    int count, day, month, year;
    string Product_Name, areskia;
    long long Product_ID;
    double Weight, Calories, Proteins;
    vector<long long> v1;    // Dhlwsh Vector Gia Monadikothta Kwdikou
    vector<APP> VECTOROUKOS; // Dhlwsh Vector Gia Apothikeysh Twn Antikeimenwn
    cout << "Posa Prointa Theleis Na Eisageis???" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Prepei Na Einai Ypoxrewtika Perissotera Apo 0" << endl;
    cin >> count;
    while (cin.fail() || count <= 0)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "Ksanavale Plithos" << endl;
        cout << "--------------------" << endl;
        cout << " Thelw Thetiko Kai Oxi Iso Me 0 Plithos 'H Arnhtiko" << endl;
        cin >> count;
    }
    cout << "-------------------------------" << endl;
    cout << "Ntaxei Sir" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << "--------------------------------" << endl;
        cout << "Twra Mporeis Na Ftiaxeis " << count << " Prointa Gia Faghto" << endl;
        cout << "--------------------------------" << endl;
        /*Prwta Thelw Na Diavazw To Onoma Tou Proiontos*/
        cin.ignore(); // Gia Na Glitwsw Tuxon Enapomeinanta Stoixeia Sto Input Buffer Kai Na Proxwrisw Sta Epomena Inputs
        cout << "Vale Onoma Proiontos (Oti Thes)" << endl;
        getline(cin, Product_Name);
        cout << "--------------------------------" << endl;
        cout << "To Onoma Einai tou prointos einai " << Product_Name << endl;
        cout << "--------------------------------" << endl;
        /*Varos Tha Metatrepetai Panta Se kg*/
        cout << "Dwse Varos Tou Proiontos Ypoxreotika Megalutero Tou 0" << endl;
        cin >> Weight;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        Weight = eisodos_varous(Weight);
        cout << "--------------------------------" << endl;
        cout << "Se Ti Monada Metrhshs Einai To Varos Tou Prointos?(Epilexe A eite B eite C)" << endl;
        cout << "--------------------------------" << endl;
        string epilogh;
        do
        {
            cout << "A.mg" << endl; // Miligram
            cout << "B.gr" << endl; // Gram
            cout << "C.kg" << endl; // Kilogram
            cout << "D.kamia(DEN GINETAI KSANADWSE)" << endl;
            cin >> epilogh;
            epilogh = epep(epilogh);
        } while (epilogh == "D");
        Weight = metatroph_varous(&epilogh, &Weight);
        cout << "To Proion Einai " << Weight << " Kila" << endl;
        cout << "--------------------------------" << endl;
        cout << "Dwse Thermides Gia To Proion Ypoxreotika Megaluteres Tou 0" << endl;
        cin >> Calories;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        Calories = eisodos_thermidwn(Calories);
        cout << "--------------------------------" << endl;
        cout << "Dwse Proitenes Gia To Proion Ypoxrewtika Megaluteres Tou 0" << endl;
        cin >> Proteins;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        Proteins = eisodos_proteinwn(Proteins);
        cout << "--------------------------------" << endl;
        /*Twra Pame Na Ftiaxoume Tis Eisodous Gia To Product_ID Kai To Expiration Date
        O kwdikos thelw na einai monadikos
        */
        /*EISAGWGH MONADIKOU KWDIKOU PROIONTOS Product_Id*/
        cout << "Dwse Kwdiko Proiontos Prosoxh Prepei Na Einai Monadikos" << endl;
        cout << "--------------------------------" << endl;
        cout << " Thelw Thetiko Kai Oxi Iso Me 0 Kwdiko Prointos 'H Arnhtiko Kwdiko Proionos 'H NA PERIEXEI GRAMMATA" << endl;
        cin >> Product_ID;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        Product_ID = eisodos_kwdikou(Product_ID);
        if (v1.empty())
        {
            v1.push_back(Product_ID);
        }
        else
        {
            v1.push_back(Product_ID);
            for (int j = 0; j < v1.size() - 1; j++)
            {
                for (int k = j + 1; k < v1.size(); k++)
                {
                    while (v1[k] == v1[j])
                    {
                        cout << "Ksanavale Kwdiko Den Einai Monadikos" << endl;
                        cout << "--------------------------------" << endl;
                        v1.erase(v1.begin() + k);
                        cin >> Product_ID;
                        if (cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        }
                        Product_ID = eisodos_kwdikou(Product_ID);
                        v1.push_back(Product_ID);
                        j = 0;
                    }
                }
            }
            cout << "Emfanisei Vector " << endl;
            cout << "--------------------------------" << endl;
            for (auto it : v1)
                cout << it << endl;
        }
        // HMEROMHNIA LHKSHS
        cout << "Dwse Hmeromhnia Lhkshs Tou Prointos" << endl;
        cout << "--------------------------------" << endl;
        cout << "Dwse Mera Lhkshs" << endl;
        cout << "--------------------------------" << endl;
        cin >> day;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        day = eisodos_meras(day);
        cout << "--------------------------------" << endl;
        cout << "Dwse Mhna Lhkshs" << endl;
        cout << "--------------------------------" << endl;
        cin >> month;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        month = eisodos_mhna(month);
        cout << "--------------------------------" << endl;
        cout << "Dwse Etos Lhkshs" << endl;
        cout << "--------------------------------" << endl;
        cin >> year;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        year = eisodos_etos(year);
        cout << "H Hmeromhnia Lhkshs Tou " << Product_Name << " Einai " << day << "/" << month << "/" << year << endl;
        cout << "--------------------------------" << endl;
        cout << "To Proion Pou Kataxwrhses Dhladh To " << Product_Name << " Sou Aresei???" << endl;
        cout << "--------------------------------" << endl;
        cout << "Dwse Mou Apanthsh " << endl;
        cout << "--------------------------------" << endl;
        cout << "An Sou Aresei Vale Y(YES) Eidalws Vale N(NO)" << endl;
        cout << "--------------------------------" << endl;
        do
        {
            cout << "Y.NAI" << endl;
            cout << "N.OXI" << endl;
            cout << "O.KAMIA(DEN GINETAI KSANADWSE)" << endl;
            cin >> areskia;
            areskia = saresei(areskia);
        } while (areskia == "O");
        areskia = foo_areskias(areskia);
        cout << "--------------------------------" << endl;
        cout << "Vale Apanthsh An Sou Aresei Loulh " << areskia << endl;
        cout << "--------------------------------" << endl;
        //
        //
        /*THELW NA FTIAXW TO ANTIKEIMENO*/
        APP BK(Product_Name, areskia, Weight, Calories, Proteins, day, month, year, Product_ID);
        //
        //
        /*PREPEI NA APOTHIKEFSW TO KATHENA ANTIKEIMENO SE ENA VECTOR ALLIWS THA TA XANW*/
        cout << "Apothikevw Ta Antikeimena Se Ena Vector" << endl;
        VECTOROUKOS.push_back(BK);
    }
    //
    //
    /*NA EMFANISW TA PROINTA APO TO VECTOR*/
    for (int x = 0; x < VECTOROUKOS.size(); x++)
        cout << VECTOROUKOS[x] << endl;

    // Apo To Windows API Pernw Thn Hmeromhnia Pou Xrhsimopoiw Thn Efarmogh Ara Auth Pou Kataxwrw Ta Proionta
    SYSTEMTIME st;
    GetLocalTime(&st);
    cout << "--------------------------------" << endl;
    cout << "H Hmeromina Pou Kataxwreises Ta Prointa Einai :" << endl;
    cout << st.wDay << "/" << st.wMonth << "/" << st.wYear << endl;
    cout << "--------------------------------" << endl;
    return 0;
}

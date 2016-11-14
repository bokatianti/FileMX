#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int main()
{
    int i=0,p,fs,f;
    string key;
    ofstream ki;
    cout<<endl;
    cout<<"FILE-MX Fake Office File Generator 2016 @ BokatianTi V 1.4.2.0 Official Release"<<endl;
    cout<<endl;
    cout<<"-----------------------------------FILEFORMAT----------------------------------"<<endl;
    cout<<"Formats: "<<endl<<"1- PowerPoint 97-2003 (.ppt)"<<endl<<"2- PowerPoint 2007-2016 (.pptx)"<<endl<<"3- Word 97-2003 (.doc)"<<endl<<"4- Word 2007-2016 (.docx)"<<
    endl<<"5- Excel 97-2003 (.xls)"<<endl<<"6- Excel 2007-2016 (.xlsx)"<<endl<<"7- Custom";
    cout<<endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;
    cout<<"Chosen format (1-7): ";
    cin>>p;
    switch (p){
    case 1 : key="powerpt.ppt"; break;
    case 2 : key="powerpt.pptx"; break;
    case 3 : key="worddoc.doc"; break;
    case 4 : key="worddoc.docx"; break;
    case 5 : key="excelsht.xls"; break;
    case 6 : key="excelsht.xlsx"; break;
    case 7 : cout<<"Custom file (filename+.extension): ";cin>>key; break;
    }
    cout<<"-------------------------------------------------------------------------------"<<endl;
    cout<<"Exact Demanded Filesize (in Kb-s): ";
    cin>>fs;
    cout<<"-----------------------------------GENERATING----------------------------------"<<endl;
    fs=fs*128;
    f=fs/100;
    ki.open(key.c_str());
    for(i=0;i<fs;i++)
    {
    ki<<"SomebodyoncetoldmetheworldisgonnarollmeIain'tthesharpesttoolintheshedShewaslookingkindofdumbwithherfingerandherthumbIntheshapeofan"L"onherforeheadWelltheyearsstartcomingandtheydon'tstopcomingFedtherulesandIhitthegroundrunningDidn'tmakesensenottoliveforfunYourbraingetssmartbutyourheadgetsdumbSomuchtodo,somuchtoseeSowhat'swrongwithtakingthebackstreetsYou'llneverknowifyoudon'tgoYou'llnevershneifyoudon'tglowHeynow,you'reanallstar,getyourgameon,goplayHeynow,you'rearockstar,gettheshowon,getpaidAndallthatglittersisgoldOnlyshootingstarsbreakthemoldIt'sacoolplaceandtheysayitgetscolderYou'rebundledupnow,waittillyougetolderButthemeteormenbegtodifferJudgingbytheholeinthesatellitepictureTheiceweskateisgettingprettythinThewater'sgettingwarmsoyoumightaswellswimMyworld'sonfire,howaboutyoursThat'sthewayIlikeitandInevergetboredHeynow,you'reanallstar,getyourgameon,goplayHeynow,you'rearockstar,gettheshowon,getpaiAllthatglittersisgoldOnlyshootingstarsbreakthemoldHeynow,you'reanallstar,getyourgameon,goplaHeynow,you'rearockstar,gettheshow,ongetpaidAndallthatglittersisgoldOnlyshootingstarsSomebodyonceaskedcouldIsparesomechangeforgasIneedtogetmyselfawayfromthisplaceIsaidyepwhataconceptIcouldusealittlefuelmyselfAndwecouldallusealittlechangeWell,theyearsstartcomingandtheydon'tstop";
    if(i%f==0)
    {
        cout<<i/f<<"% Ready"<<endl;
    }
    }
    ki.close();


}

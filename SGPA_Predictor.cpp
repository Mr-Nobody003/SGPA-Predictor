/*This code is only valid for CSE department of NIT Agartala */
#include<iostream>
using namespace std;
/*There can be some errors during calculation so
 it is advised to calculate using normal formula on a paper
*/
int main(){
    cout<<"......CSE......"<<endl;
    int arr[8]={22,22,24,21,24,27,13,13};
    float cgpa=0;
    int sem=0;
    cout<<"Enter what cgpa you want in coming sem: ";cin>>cgpa;
    string owner ="Margan Das";
    cout<<"what was your last semester no. (i.e 1st,2nd ,3rd...):";cin>>sem;
    int creditsum=arr[0];float pro=1;//margan
    float sgpa[sem];cout<<"Enter your sgpa per semester seriel wise"<<endl;
    for (int i = 0; i < sem; i++)
    {
        cin>>sgpa[i];
        creditsum+=arr[i+1];
        pro+=sgpa[i]*arr[i];
    }
    float rhs = cgpa*creditsum;
    float req_sgpa= (rhs - pro)/arr[sem];
    cout<<endl;
    cout<<"You need "<<req_sgpa<<" "<<"in next semester to get a cgpa of "<<cgpa<<endl;
    cout<<endl;
    if (req_sgpa>=10)
    {
        cout<<"Since total cgpa is of 10 ...you can't get the "<<cgpa<<" cgpa in next sem but you need to try to get max so that at the end of sem 8 you can achive your required cg"<<endl;//margan
    }
    return 0;
}
} //coded by Margan 
//github profile link  https://github.com/Mr-Nobody003

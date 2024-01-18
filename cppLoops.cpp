#include <iostream>
using namespace std;

int main(){

//     int l;
//     for(int r=1;r<=5;r++){
//     // char n = 'a'+(r-1);
//     for(int c=1;c<=5;c=c+1){
//         char n = 'a'+(c-1);
//         cout<<n<<" ";
//     }
//     cout<<endl;
//    }
    // int n1=;
    // for(int i=1;i<=5;i++){
        
    //     for(int j=1;j<=5;j++){
    //         n1++;
    //         cout<<n1<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int r=1;r<=5;r++){
    //     char n = 'a'+(r-1);
    //     for(int c=1;c<=r;c++){

    //         cout<<n<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int r=5;r>=1;r--){
    //     for(int c=5;c>=r;c--){
    //         cout<<c<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int r=1;r<=5;r++){
        for(int fc=1;fc<=5-(r-1);fc++){
            cout<<"  ";
        }
        for(int bc=r;bc>=1;bc--){
            char n=65+(bc-1);
            cout<<n<<" ";
        }
        cout<<endl;

    }
    
    return 0;
}
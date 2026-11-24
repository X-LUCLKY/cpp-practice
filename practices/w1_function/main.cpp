#include<iostream>
#include<fstream>
#include<string>
struct information {
    std::string name;
    double donation;
};
void show(const information *arr,int num,bool judge){
    int cnt=0;
    for (int i=0;i<num;i++) {
        if (judge) {
            if (arr[i].donation>10000) {
                std::cout<<arr[i].name<<"   "<<arr[i].donation<<std::endl;
                cnt++;
            }
        }
        else {
            if (arr[i].donation<=10000){
                std::cout<<arr[i].name<<"   "<<arr[i].donation<<std::endl;
                cnt++;
            }
        }
    }
    if (cnt==0) {
        std::cout<<"none"<<std::endl;
    }
}

int main() {
    std::ifstream ifile("donators.txt");
    if (!ifile.is_open()) {
        std::cout<<"failed"<<std::endl;
        return 1;
    }
    std::cout<<"enter the number of all donators:"<<std::endl;
    int num;
    std::cin>>num;
    information *arr=new information[num];
    for (int j=0;j<num;j++) {
        std::getline(ifile,arr[j].name);
        ifile>>arr[j].donation;
        ifile.ignore();
    }
    std::cout<<"---Grand Patrons---"<<std::endl;
    show(arr,num,true);
    std::cout<<"---Patrons---"<<std::endl;
    show(arr,num,false);
    delete []arr;
    ifile.close();
    return 0;
}
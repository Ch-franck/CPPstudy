#include<iostream>
#include<vector>//����vectorͷ�ļ�
#include<algorithm>
using namespace std;
int main() {

 vector<int> arr;//����һ��vector����array
 int number,cnt;
 while (cin >> number) {

  arr.push_back(number);//ÿ����һ�����־Ͱ�����ӵ���������
  if (cin.get() == '\n'){//����ǻس���������ѭ��
   sort(arr.begin(), arr.end());
   cout<<"Case "<<++cnt<<": ";
    for(vector<int>::iterator it=arr.begin(); it!=arr.end(); it++){
        cout<<*it<<" ";
    }
    cout<<"\b\n";
    arr.clear();}
 }
sort(arr.begin(), arr.end());
   cout<<"Case "<<++cnt<<": ";
    for(vector<int>::iterator it=arr.begin(); it!=arr.end(); it++){
        cout<<*it<<" ";
    }
    cout<<"\b\n";
    arr.clear();

}

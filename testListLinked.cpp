#include <iostream>
#include "ListArray.h"

using namespace std;

int main(){
    cout << boolalpha; // Configuramos cout de modo que muestre true/false en vez de de 0/1.

    ListArray<int> list;

    cout << list << endl; 
    cout << "size(): " << list.size() << endl; 
    cout << "empty(): " << list.empty() << endl; 
    cout << endl; 

    list.insert(0, 0);
    list.insert(1, 10);
    list.insert(0, -5);
    list.insert(2, 5);
    cout << list << endl; 
    cout << "size(): " << list.size() << endl; 
    cout << "empty(): " << list.empty() << endl; 
    cout << endl; 

    cout << "l.get(0) => " << list.get(0) << "; l[0] => " << list[0] << endl; 
    cout << "l.get(3) => " << list.get(3) << "; l[3] => " << list[3] << endl; 
    cout << endl; 

    int r;
    r = list.remove(3);
    cout << "l.remove(3) => " << r << ": " << endl; 
    r = list.remove(1);
    cout << "l.remove(1) => " << r << ": " << endl; 
    r = list.remove(0);
    cout << "l.remove(0) => " << r << ": " << endl; 
    cout << endl; 

    cout << list << endl; 
    cout << "size(): " << list.size() << endl; 
    cout << "empty(): " << list.empty() << endl; 
    cout << endl; 

    list.append(14);
    list.prepend(33);
    cout << list << endl; 
    cout << "size(): " << list.size() << endl; 
    cout << "empty(): " << list.empty() << endl; 
    cout << endl; 

    cout << "l.search(14) => " << list.search(14) << endl; 
    cout << "l.search(55) => " << list.search(55) << endl; 

    try{
        list.insert(-1, -99);
    } catch (out_of_range &e){
        cout << "l.insert(-1, 99) => out_of_range: " << e.what() << endl; 
    }

    try{
        list.insert(4, -99);
    } catch (out_of_range &e){
        cout << "l.insert(4, 99) => out_of_range: " << e.what() << endl; 
    }

    try{
        list.get(-1);
    } catch (out_of_range &e){
        cout << "l.get(-1) => out_of_range: " << e.what() << endl; 
    }

    try{
        list.get(3);
    } catch (out_of_range &e){
        cout << "l.get(3) => out_of_range: " << e.what() << endl; 
    }

    try{
        list.remove(-1);
    } catch (out_of_range &e){
        cout << "l.remove(-1) => out_of_range: " << e.what() << endl; 
    }

    try{
        list.remove(3);
    } catch (out_of_range &e){
        cout << "l.remove(3) => out_of_range: " << e.what() << endl; 
    }

}
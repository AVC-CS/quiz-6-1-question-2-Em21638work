/***************************************************
 * Code your program here
 ***************************************************/
#include<iostream>
#include <fstream> 

int writeFile(data.txt);
int readFile(data.txt);

int writeFile(data.txt) {
    ofstream ofs;

    ofs.open("data.txt");
    if (!ofs) {
        cerr << "File Open Error\n";
        exit(0);
    }

    int employeeID, N;
    string employeeName, departmentName;
    double salary;
    
    cin >> N;
    ofs << N;
    
    for (int i = 0; i < N; i++) {     
        cin >> employeeID >> employeeName >> departmentName >> salary;
        ofs << employeeID << employeeName << departmentName << salary;
    }

    ofs.close();

}

int readFile("data.txt") {
    ifstream ifs;

    ifs.open("data.txt"); //hope this works
    if (!ifs)
    {
        cerr << "File Open Error\n";
        exit(0);
    }
    // my code
    int employeeID, N;
    string employeeName, departmentName;
    double salary, total = 0.00, avg;

    ifs >> N;    
    
    for (int i = 0; i < N; i++) {
        ifs >> employeeID >> employeeName >> departmentName >> salary;
        total = total + salary;
        cout << "ID  Name  Department Salary" << endl;
        cout << employeeID << " " << employeeName << " " << departmentName << " " <<salary << endl;  
    }
    avg = total / N;
    cout << "All salary: " << total << " Average salary: " << avg << endl;
    
}
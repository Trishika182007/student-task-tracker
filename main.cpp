#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
vector<string> tasks;
vector<bool> completed;
int choice;
while(true){
cout<<"\n==== STUDENT TASK TRACKER ====\n";
cout<<"1. Add task\n";
cout<<"2. View tasks\n";
cout<<"3. Mark task as completed\n";
cout<<"4. Exit\n";
cout<<"Enter choice: ";
cin>>choice;
cin.ignore();
if(choice == 1) {
string task;
cout << "Enter task: ";
getline(cin, task);
tasks.push_back(task);
completed.push_back(false);
cout << "Task added!\n";
}
else if (choice==2) {
if(tasks.empty()){
cout<<"No tasks available.\n";
}
else{
for(int i=0;i<tasks.size();i++){
cout << i+1 << ". " << tasks[i];
if(completed[i])
cout << " [Completed]";
else
cout << " [Pending]";
cout << endl;
}
}
}
else if (choice == 3) {
int taskNumber;
cout << "Enter task number: ";
cin >> taskNumber;
if (taskNumber >= 1 && taskNumber <= tasks.size()) {
completed[taskNumber - 1] = true;
cout << "Task marked as completed!\n";
}
else{
cout << "Invalid task number.\n";
}
}
else if (choice == 4) {
break;
}
else {
cout << "Invalid choice.\n";
}
}
return 0;
}
 

#include <bits/stdc++.h>

using namespace std;

class Book{
	public:
	   int id_book;
      string book_name ,author_name;
      double price;
    public:
    	void addBook(){
    	    cout<<"\n Enter Book Id : ";
           cin>>id_book;
           cout<<"\n Enter Book Name : ";
           cin>>book_name;
           cout<<"\n Enter Aouthor Name : ";
           cin>>author_name;
           cout<<"\n Enter Price : ";
           cin>>price;
		}
		void showBook(){
			cout<<"\n Book Id : "<<id_book<<"\n Book Name : "<<book_name<<"\n Book Aouthor : "<<author_name<<"\n Price : "<<price;
		}
	};
	
int main(){
    Book obj[20];
    int choice=0 ,i=-1;           
    char a;               
    cout<<"   * welcome **\n\n\n";
    
    while(choice!=4){
        start:
        cout<<"\n\nchoose number\n"<<"1-add new book\n2-show all books\n3-search aboat book\n4-exit\n";  
        cin>>choice;                
        
        switch(choice)
        {
                
            case 1:          
                
            {
          
                do{
                  i++;
                  obj[i].addBook();
                  cout<<"\n\nyou want add book again? y/n";cin>>a;       
                }while(a=='y'); 
                cout<<"\n\nThank you for adding books \n\n";
            }
            break;
            case 2:
            {
                if (i < 0){       
                    cout<<"\n\nThere is no book added to system , Please add new book \n";
                }
                 
            	for(int j=0 ;j<=i ;j++){
            		cout<<"\n\nthe info of book "<<j+1<<" is : \n";
            		obj[j].showBook();
				}	
			}
			break;
			case 3:
			{
				bool flag=false;
				int id;
				cout<<"\n\nEnter book id \n";
				cin>>id;
				for(int j=0 ;j<=i ;j++){
            	    if(id==obj[j].id_book){
            	    	obj[j].showBook();
                        flag=true;
					}
				}
				if(flag==false){
					cout<<"\n\nNot founded\n\n";
				    goto start;
				}
			}
			break;
			case 4:
            {
	           exit(0);
            }
            break;
            default:
                cout<<"\n\n you have entered wrong value, please type again\n";
                goto start;
        }
    }

}

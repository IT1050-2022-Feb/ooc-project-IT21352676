#include <iostream>
#include <cstring>
using namespace std;

class Packages
{
	private:
		int pkg_id;
		char pkg_Name[20];
		char pkg_Category[20];
		
	public:
 Packages();
 Packages (int pakgid,char pakgname[],char pakgcategory[]);
		void displayPackages(int pakgid,char pakgname[],char pakgcategory[]);
		void updatePackages();
~Packages();
		
};
 Packages::Packages(){}
 Packages::Packages(int pakgid,char pakgname[],char pakgcategory[])
{
	pkg_id=pakgid;
	strcpy(pkg_Name,pakgname);
	strcpy(pkg_Category,pakgcategory);
}

void Packages::updatePackages ()
{
}
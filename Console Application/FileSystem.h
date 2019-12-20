class fileSystem
{
public:
	fileSystem(int, int);//class constructor
	~fileSystem();// class destructor
	void displayall(); // displays all folder and its inner files
	void copy(); // performs copy of a file from one folder to another, with an option of changing the name of the copied file
	bool vacancy(int);// checks whether the destination folder is full
	void search(); //search and display name of all similar files
	void saveWindows();// save all files in foldname[0] to windows.txt
	void saveIOS(); // save all files in foldname [1] to IOS.txt
	void savefoldName(); // save al; folder names
	void del(int, char *flname); // to delete files
	bool compare(int i, char *x); // to compare outside the member functions
	void retrieve();//retireves data from folders


private:
	int foldnum; // current number of folders-can be modified. In this assignment we only assume that there are two folders.
	int filenum;	// maximum number of files inside a folder. We assume that it can only contains 10 files but it can be modified.
	char foldname[2][15]; // this array will stores 2 folder name with each 15 characters maximum
	char filenamess[2][10][100];// this array stores maximum 10 files in the the 2 folders, with 100 characters for each filename.
};
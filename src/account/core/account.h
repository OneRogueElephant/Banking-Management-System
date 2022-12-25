/* Developer: Tyler McDougal 
 * 
 *
 *
 *Description:
*/

struct account {
	char* accountType;
	double accountAmount = 0.00;
	int accountPin;
	long accountNumber;
};

int setAccountType();
char* getAccountType();

int setAccountNumber(void);
long getAccountNumber();

int setAccountPin();
int updateAccountPin();
int getAccountPin();

double updateAccountAmount();
double getAccountAmount();

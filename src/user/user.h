/*




*/
#include "account.h"

struct user {
	char *fullName;
	char *userName;
	char *emailAddress;
	char *password;
	char* phoneNumber;
	int 2_factor_auth;
	struct account accounts;
};

int enable_2fa(void);
int disable_2fa(void);
int is_2fa_set(*);

int createAccount();
int readAccount(
int addAccount(*);
int deleteAccount();
int getAccounts();

int  set_firstName(*);
int  get_firstName(*);

int set_lastName(*);
int get_lastName(*);

int set_Password(*);
int get_Password(*);

int set_emailAddress(*);
int get_emailAddress(*);

int set_userName(*);
int get_userName(*);

int set_phoneNumber(*);
int get_phonNumber(*);

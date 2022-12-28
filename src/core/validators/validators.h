

struct validation_error {
	char* error_msg;
	int error_status
};


int set_validation_error(*);
int get_validation_error(*);


int validate_amount(double);
int validate_pin(int);
int validate_accountType(char);
int validate_account(*);
int validate_accountNumber(long);


int validate_credentials(*);


int validate_username(*);
int validate_password(*);
int validate_email(*);
int validate_name(*);
int validate_phone_number(*);

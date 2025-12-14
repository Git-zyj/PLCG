#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3793002327U;
unsigned char var_1 = (unsigned char)131;
short var_2 = (short)-5525;
signed char var_4 = (signed char)59;
int var_6 = -1444435809;
int var_12 = 1802910975;
unsigned char var_14 = (unsigned char)142;
short var_15 = (short)-12774;
int zero = 0;
long long int var_16 = 2596871029147681536LL;
int var_17 = -547255820;
unsigned long long int var_18 = 12152093509852898691ULL;
unsigned int var_19 = 3760584871U;
short var_20 = (short)-6017;
unsigned char var_21 = (unsigned char)7;
int var_22 = -2063854199;
short var_23 = (short)-23752;
unsigned long long int var_24 = 17157824000804406892ULL;
unsigned long long int var_25 = 3799620752254676917ULL;
long long int var_26 = 425989293832008365LL;
long long int arr_1 [11] ;
signed char arr_2 [11] ;
unsigned char arr_3 [11] ;
long long int arr_4 [11] ;
signed char arr_5 [11] ;
_Bool arr_7 [11] ;
long long int arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -1890894435080688334LL : -1044675692514834332LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -4470687139459711302LL : 2149719515608516832LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -8642196733122331404LL : 809955373543132148LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

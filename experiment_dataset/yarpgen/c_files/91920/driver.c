#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 266613195;
short var_1 = (short)-4581;
unsigned int var_5 = 307175690U;
signed char var_6 = (signed char)120;
signed char var_9 = (signed char)-74;
unsigned long long int var_11 = 10832015608357278854ULL;
int var_14 = 315255451;
unsigned long long int var_15 = 385316921982912001ULL;
int zero = 0;
unsigned long long int var_16 = 2227800245140464661ULL;
unsigned int var_17 = 1551078854U;
long long int var_18 = 519436136151536066LL;
unsigned short var_19 = (unsigned short)26631;
unsigned char var_20 = (unsigned char)176;
unsigned long long int var_21 = 9265343276239989024ULL;
long long int var_22 = 3176059783981918545LL;
long long int var_23 = 6238498476014466643LL;
signed char var_24 = (signed char)66;
unsigned int var_25 = 1309700533U;
unsigned short var_26 = (unsigned short)36437;
unsigned char var_27 = (unsigned char)127;
signed char arr_1 [24] ;
signed char arr_2 [25] ;
unsigned long long int arr_3 [25] ;
short arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 7427298031612719719ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)-7237;
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
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

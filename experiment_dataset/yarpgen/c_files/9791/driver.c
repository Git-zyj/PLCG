#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)12;
signed char var_3 = (signed char)-35;
long long int var_5 = -7938725085811939010LL;
long long int var_8 = 6540657954319531093LL;
long long int var_12 = 603212512339547907LL;
long long int var_17 = 4022109503619748588LL;
int zero = 0;
unsigned long long int var_20 = 18219943511776660119ULL;
unsigned int var_21 = 3099469919U;
long long int var_22 = -3599913119458471486LL;
_Bool var_23 = (_Bool)1;
long long int var_24 = -6654032127860654168LL;
long long int var_25 = -4424636841025793853LL;
long long int var_26 = 5818248887875825837LL;
signed char var_27 = (signed char)-92;
unsigned short arr_0 [13] ;
unsigned char arr_1 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)42264;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)37;
}

void checksum() {
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

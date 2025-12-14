#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8738;
unsigned int var_4 = 393671697U;
short var_5 = (short)-29289;
long long int var_7 = 2224226505285820851LL;
unsigned char var_9 = (unsigned char)82;
unsigned char var_10 = (unsigned char)124;
unsigned short var_12 = (unsigned short)6508;
signed char var_15 = (signed char)-97;
unsigned long long int var_17 = 5262367938559558687ULL;
long long int var_18 = 6128034298447865212LL;
int zero = 0;
unsigned char var_19 = (unsigned char)57;
long long int var_20 = -8414704552047415569LL;
unsigned char var_21 = (unsigned char)70;
unsigned int var_22 = 3884397105U;
unsigned short arr_9 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)7489 : (unsigned short)58804;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

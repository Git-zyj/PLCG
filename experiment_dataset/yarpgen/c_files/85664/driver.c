#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25284;
unsigned long long int var_9 = 14874828373518202851ULL;
int var_12 = -2110947320;
short var_18 = (short)-20555;
_Bool var_19 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)104;
unsigned short var_21 = (unsigned short)23099;
signed char var_22 = (signed char)65;
unsigned long long int var_23 = 8967563501259395313ULL;
unsigned long long int arr_0 [13] [13] ;
signed char arr_1 [13] ;
unsigned char arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 11036342207798334612ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)186;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

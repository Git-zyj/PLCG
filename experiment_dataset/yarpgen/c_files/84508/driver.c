#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -7863984588146314875LL;
unsigned char var_9 = (unsigned char)22;
unsigned short var_18 = (unsigned short)36641;
int zero = 0;
unsigned char var_19 = (unsigned char)238;
unsigned short var_20 = (unsigned short)12334;
short var_21 = (short)6763;
signed char var_22 = (signed char)55;
signed char var_23 = (signed char)-45;
int arr_7 [17] ;
unsigned char arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = -95769557;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)101 : (unsigned char)95;
}

void checksum() {
    hash(&seed, var_19);
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

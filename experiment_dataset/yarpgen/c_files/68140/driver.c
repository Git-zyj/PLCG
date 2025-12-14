#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1770917159;
short var_9 = (short)-9947;
unsigned short var_10 = (unsigned short)23806;
unsigned long long int var_18 = 10892135001101731353ULL;
int zero = 0;
int var_19 = 234203830;
unsigned char var_20 = (unsigned char)90;
unsigned short var_21 = (unsigned short)25791;
signed char var_22 = (signed char)75;
int var_23 = -1054006610;
int arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = -1389795097;
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

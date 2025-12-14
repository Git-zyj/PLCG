#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)16356;
short var_8 = (short)-25079;
short var_11 = (short)-11856;
unsigned long long int var_12 = 12060950078186875968ULL;
unsigned long long int var_15 = 10245644686075845130ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)43664;
unsigned short var_17 = (unsigned short)64937;
short var_18 = (short)-11360;
long long int var_19 = -4215733569970674504LL;
short var_20 = (short)30599;
unsigned char arr_1 [10] [10] ;
long long int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -6962984864237556357LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

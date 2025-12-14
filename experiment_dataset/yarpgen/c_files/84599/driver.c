#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)83;
signed char var_2 = (signed char)-57;
unsigned int var_4 = 857659490U;
unsigned short var_6 = (unsigned short)17078;
unsigned int var_7 = 2208385185U;
int zero = 0;
unsigned short var_10 = (unsigned short)25680;
unsigned int var_11 = 3044674015U;
unsigned int var_12 = 1517809396U;
signed char var_13 = (signed char)-18;
unsigned int var_14 = 1334385788U;
unsigned int var_15 = 2159870983U;
unsigned int arr_0 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1286521354U : 4254361908U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)22;
int var_14 = -318202324;
int zero = 0;
short var_15 = (short)1396;
long long int var_16 = -5995385677753269130LL;
signed char var_17 = (signed char)122;
unsigned short var_18 = (unsigned short)8507;
signed char var_19 = (signed char)7;
unsigned long long int var_20 = 18276953663587103043ULL;
unsigned int var_21 = 145679530U;
unsigned int var_22 = 3562469073U;
unsigned char var_23 = (unsigned char)245;
long long int var_24 = 4903856014390517848LL;
short arr_7 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)-11266;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

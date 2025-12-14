#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13367520771233911304ULL;
unsigned char var_9 = (unsigned char)225;
signed char var_11 = (signed char)-46;
int zero = 0;
long long int var_14 = 1381083505570671727LL;
unsigned int var_15 = 1509895834U;
signed char var_16 = (signed char)-15;
unsigned short var_17 = (unsigned short)46219;
unsigned long long int var_18 = 13740063555933297739ULL;
signed char var_19 = (signed char)118;
short arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-14805 : (short)14953;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

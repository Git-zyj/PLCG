#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11795;
signed char var_1 = (signed char)75;
short var_2 = (short)-2922;
unsigned char var_3 = (unsigned char)133;
long long int var_4 = 2059325519209185111LL;
unsigned int var_6 = 942508470U;
int var_7 = -1940183888;
unsigned short var_9 = (unsigned short)58892;
unsigned char var_10 = (unsigned char)118;
unsigned long long int var_11 = 14339362864806665854ULL;
unsigned short var_12 = (unsigned short)43991;
int zero = 0;
unsigned short var_14 = (unsigned short)57011;
long long int var_15 = 3759971522801242942LL;
unsigned short var_16 = (unsigned short)15763;
unsigned long long int var_17 = 12488468381800772657ULL;
int var_18 = -2110157282;
signed char var_19 = (signed char)-45;
signed char arr_1 [10] ;
signed char arr_5 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-51;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-71;
int var_6 = 1837265326;
short var_8 = (short)-12491;
unsigned char var_9 = (unsigned char)227;
unsigned int var_10 = 1572115303U;
long long int var_11 = -378271245528589556LL;
int var_15 = 96087085;
_Bool var_16 = (_Bool)0;
long long int var_18 = -1887959120553157011LL;
unsigned int var_19 = 407001071U;
int zero = 0;
unsigned int var_20 = 3010171527U;
unsigned char var_21 = (unsigned char)65;
signed char var_22 = (signed char)-51;
int arr_10 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -335158587 : -1950535128;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 841637173U;
unsigned short var_2 = (unsigned short)36136;
unsigned int var_3 = 2643823245U;
unsigned int var_6 = 1246214273U;
unsigned int var_8 = 1525696121U;
unsigned int var_12 = 3524307364U;
unsigned int var_13 = 342299842U;
unsigned int var_15 = 3582546420U;
int zero = 0;
unsigned int var_16 = 3409665701U;
unsigned int var_17 = 2315211271U;
unsigned int var_18 = 574836862U;
unsigned int var_19 = 2001961340U;
unsigned short var_20 = (unsigned short)6318;
unsigned int var_21 = 1440490046U;
unsigned int var_22 = 2700585650U;
unsigned int arr_0 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 35724847U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

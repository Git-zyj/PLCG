#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 692978360U;
_Bool var_2 = (_Bool)1;
signed char var_8 = (signed char)-35;
int var_9 = -1318502028;
int var_10 = 855207353;
unsigned char var_13 = (unsigned char)226;
short var_14 = (short)-31050;
int zero = 0;
signed char var_15 = (signed char)-118;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)20192;
short var_18 = (short)9647;
int var_19 = -656378796;
unsigned char var_20 = (unsigned char)163;
unsigned int var_21 = 1601538833U;
short arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)7082;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

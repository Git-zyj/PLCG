#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1743203180U;
unsigned short var_6 = (unsigned short)24215;
unsigned long long int var_7 = 9321733893831115123ULL;
short var_8 = (short)-9069;
int var_13 = -832368553;
unsigned short var_15 = (unsigned short)26849;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)113;
unsigned short var_18 = (unsigned short)11250;
unsigned long long int var_19 = 4115367614568208077ULL;
unsigned short var_20 = (unsigned short)27956;
unsigned int var_21 = 2936321363U;
unsigned char var_22 = (unsigned char)184;
unsigned long long int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 9618228620395135955ULL;
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

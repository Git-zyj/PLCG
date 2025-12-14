#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2706972253U;
long long int var_4 = -8044781496730484600LL;
_Bool var_6 = (_Bool)0;
int var_7 = -451131261;
short var_11 = (short)13701;
short var_12 = (short)25863;
unsigned int var_13 = 1925716397U;
long long int var_14 = -1321108389579906173LL;
int zero = 0;
unsigned char var_15 = (unsigned char)92;
int var_16 = -1078664339;
unsigned char var_17 = (unsigned char)130;
short var_18 = (short)25969;
unsigned short var_19 = (unsigned short)26202;
unsigned short var_20 = (unsigned short)54552;
_Bool arr_1 [14] ;
short arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-29628;
}

void checksum() {
    hash(&seed, var_15);
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

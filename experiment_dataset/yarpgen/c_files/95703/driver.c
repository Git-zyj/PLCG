#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5264;
signed char var_1 = (signed char)82;
unsigned short var_2 = (unsigned short)64911;
signed char var_3 = (signed char)87;
unsigned short var_4 = (unsigned short)19395;
long long int var_5 = -8713219817357866632LL;
unsigned char var_9 = (unsigned char)217;
unsigned char var_11 = (unsigned char)74;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)44139;
unsigned char var_14 = (unsigned char)145;
int var_16 = 154359955;
signed char var_17 = (signed char)78;
signed char var_18 = (signed char)61;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 3629904011593492497LL;
unsigned int var_21 = 4261179517U;
int var_22 = -1878447774;
short var_23 = (short)14459;
unsigned long long int arr_0 [24] [24] ;
unsigned int arr_1 [24] ;
short arr_3 [24] ;
unsigned short arr_4 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 7772568014031795281ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 3806158101U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)-4151;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)9717;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

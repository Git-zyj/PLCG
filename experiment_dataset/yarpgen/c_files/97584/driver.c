#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)16;
signed char var_4 = (signed char)-63;
_Bool var_8 = (_Bool)1;
short var_9 = (short)25971;
short var_11 = (short)-3889;
int zero = 0;
long long int var_13 = -5263160608084086106LL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)43534;
unsigned short arr_0 [17] ;
unsigned int arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)30408;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 2612011311U;
}

void checksum() {
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

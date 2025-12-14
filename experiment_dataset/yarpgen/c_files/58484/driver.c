#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-54;
unsigned long long int var_1 = 11927616456685318578ULL;
unsigned long long int var_8 = 513864702081777701ULL;
unsigned short var_13 = (unsigned short)43053;
long long int var_16 = -6324471965349685423LL;
int zero = 0;
short var_17 = (short)31818;
short var_18 = (short)17166;
unsigned short var_19 = (unsigned short)62147;
signed char var_20 = (signed char)-15;
unsigned short var_21 = (unsigned short)48507;
unsigned char arr_0 [17] ;
unsigned short arr_3 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)243 : (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)44239 : (unsigned short)2699;
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13396;
unsigned short var_1 = (unsigned short)2199;
int var_2 = -614382614;
int var_6 = -1130002640;
unsigned int var_9 = 3618347612U;
unsigned char var_11 = (unsigned char)31;
short var_12 = (short)-20083;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)120;
unsigned short var_20 = (unsigned short)58063;
unsigned char var_21 = (unsigned char)208;
signed char arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)102;
}

void checksum() {
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

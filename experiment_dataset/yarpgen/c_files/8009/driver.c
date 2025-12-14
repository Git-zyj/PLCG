#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)209;
short var_1 = (short)-3967;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)55013;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)63;
unsigned long long int var_10 = 2070682843739558163ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)36109;
unsigned int var_14 = 1561989214U;
long long int var_15 = 7285456131500007482LL;
short var_16 = (short)-4009;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

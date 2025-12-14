#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3718368806U;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)71;
unsigned int var_6 = 3355389752U;
unsigned long long int var_8 = 12736581998783939362ULL;
unsigned short var_9 = (unsigned short)22310;
signed char var_10 = (signed char)-4;
short var_11 = (short)10734;
short var_12 = (short)30816;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-16240;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 212443151U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

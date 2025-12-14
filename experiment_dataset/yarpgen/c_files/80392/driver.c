#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)13453;
unsigned short var_3 = (unsigned short)18470;
short var_4 = (short)22627;
unsigned long long int var_5 = 9001195054165392249ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)11376;
unsigned char var_8 = (unsigned char)38;
int zero = 0;
unsigned long long int var_10 = 17544131355806304774ULL;
unsigned short var_11 = (unsigned short)44712;
unsigned char var_12 = (unsigned char)170;
unsigned short var_13 = (unsigned short)42188;
unsigned long long int var_14 = 14185717893640400218ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

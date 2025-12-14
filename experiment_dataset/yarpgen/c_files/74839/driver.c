#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)58;
unsigned long long int var_1 = 1992804652022737048ULL;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 288320637U;
unsigned int var_6 = 1281700320U;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)72;
int zero = 0;
unsigned int var_10 = 1185513723U;
unsigned int var_11 = 2018732659U;
unsigned short var_12 = (unsigned short)31291;
unsigned short var_13 = (unsigned short)21483;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

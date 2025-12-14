#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)102;
short var_4 = (short)7085;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)26;
unsigned short var_8 = (unsigned short)45503;
int var_11 = 1374557209;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_14 = 1347093346;
unsigned char var_15 = (unsigned char)220;
long long int var_16 = -7444833194957901971LL;
void init() {
}

void checksum() {
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

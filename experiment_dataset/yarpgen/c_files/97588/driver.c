#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 861975912;
_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)234;
unsigned short var_7 = (unsigned short)45907;
unsigned int var_8 = 3300826191U;
unsigned short var_9 = (unsigned short)33424;
unsigned char var_10 = (unsigned char)28;
unsigned long long int var_11 = 8907649409995903413ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = -901613019212609126LL;
void init() {
}

void checksum() {
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

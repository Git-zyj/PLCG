#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)203;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 7088104721376237768ULL;
unsigned long long int var_7 = 10337543247643366653ULL;
short var_8 = (short)-2569;
unsigned short var_10 = (unsigned short)28990;
unsigned int var_12 = 3528347731U;
int zero = 0;
signed char var_14 = (signed char)74;
long long int var_15 = -9000781275552332833LL;
short var_16 = (short)1344;
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

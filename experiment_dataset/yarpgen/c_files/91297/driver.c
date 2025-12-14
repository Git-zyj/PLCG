#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 793418016;
_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)213;
unsigned char var_7 = (unsigned char)149;
_Bool var_9 = (_Bool)1;
int var_11 = -1306484265;
int zero = 0;
long long int var_12 = 8008842474834630669LL;
unsigned short var_13 = (unsigned short)47459;
unsigned char var_14 = (unsigned char)147;
void init() {
}

void checksum() {
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

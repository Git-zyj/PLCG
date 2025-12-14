#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15176035546091194437ULL;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)53019;
int var_9 = -440639459;
unsigned char var_17 = (unsigned char)52;
int zero = 0;
long long int var_18 = -763433921925590838LL;
unsigned short var_19 = (unsigned short)46661;
unsigned long long int var_20 = 8338721764921338155ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

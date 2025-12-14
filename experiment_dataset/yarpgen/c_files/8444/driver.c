#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)57;
_Bool var_9 = (_Bool)0;
short var_11 = (short)-10476;
int zero = 0;
unsigned long long int var_17 = 2325818829546782643ULL;
unsigned short var_18 = (unsigned short)63200;
short var_19 = (short)-1272;
unsigned short var_20 = (unsigned short)43998;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)204;
unsigned char var_1 = (unsigned char)140;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned char var_9 = (unsigned char)131;
unsigned char var_10 = (unsigned char)171;
unsigned long long int var_13 = 7516755526565466369ULL;
int zero = 0;
unsigned long long int var_16 = 9774887460090709292ULL;
signed char var_17 = (signed char)100;
unsigned char var_18 = (unsigned char)137;
short var_19 = (short)19851;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-2;
_Bool var_7 = (_Bool)0;
unsigned char var_11 = (unsigned char)52;
unsigned int var_15 = 893054855U;
short var_17 = (short)5279;
int zero = 0;
unsigned char var_18 = (unsigned char)89;
unsigned long long int var_19 = 4542699598360739470ULL;
void init() {
}

void checksum() {
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

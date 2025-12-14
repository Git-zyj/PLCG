#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 11977567714995071765ULL;
_Bool var_13 = (_Bool)0;
signed char var_18 = (signed char)35;
int zero = 0;
unsigned short var_19 = (unsigned short)1320;
signed char var_20 = (signed char)-24;
void init() {
}

void checksum() {
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

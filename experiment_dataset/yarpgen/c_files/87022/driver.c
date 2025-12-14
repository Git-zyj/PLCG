#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-55;
unsigned int var_3 = 1437759638U;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 890446450U;
unsigned short var_7 = (unsigned short)55946;
unsigned long long int var_8 = 6202382632644689524ULL;
int zero = 0;
signed char var_10 = (signed char)-72;
unsigned int var_11 = 3730554806U;
unsigned long long int var_12 = 14988388860294849941ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

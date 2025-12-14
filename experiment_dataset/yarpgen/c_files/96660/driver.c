#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)50124;
unsigned long long int var_6 = 4154664069909166948ULL;
short var_8 = (short)-25106;
short var_12 = (short)3359;
signed char var_14 = (signed char)-42;
int zero = 0;
short var_15 = (short)1163;
unsigned long long int var_16 = 18309290669851842283ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

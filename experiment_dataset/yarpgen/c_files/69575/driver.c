#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27288;
signed char var_2 = (signed char)-91;
short var_5 = (short)-7744;
unsigned char var_7 = (unsigned char)209;
unsigned short var_9 = (unsigned short)53285;
unsigned char var_10 = (unsigned char)136;
int zero = 0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)61259;
unsigned long long int var_14 = 3000222916560228021ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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

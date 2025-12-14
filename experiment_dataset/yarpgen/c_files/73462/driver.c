#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)22;
_Bool var_4 = (_Bool)0;
long long int var_7 = 2242742411850580041LL;
unsigned char var_8 = (unsigned char)25;
signed char var_10 = (signed char)59;
unsigned long long int var_11 = 13548401878786325036ULL;
unsigned short var_13 = (unsigned short)28992;
unsigned long long int var_14 = 8758261134215864785ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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

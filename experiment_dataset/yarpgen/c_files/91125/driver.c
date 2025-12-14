#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1366472032310312748LL;
unsigned long long int var_4 = 16780134657095978483ULL;
signed char var_11 = (signed char)-118;
short var_16 = (short)31579;
unsigned short var_18 = (unsigned short)33960;
int zero = 0;
unsigned short var_20 = (unsigned short)15046;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 6847326437578829005ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

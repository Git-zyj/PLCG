#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)103;
long long int var_6 = -2923500888667587511LL;
signed char var_9 = (signed char)-39;
_Bool var_11 = (_Bool)1;
unsigned int var_14 = 1280384397U;
int zero = 0;
long long int var_15 = 27251584495703936LL;
_Bool var_16 = (_Bool)1;
long long int var_17 = 926860171334492671LL;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-100;
_Bool var_1 = (_Bool)0;
unsigned long long int var_6 = 13092244452769562614ULL;
unsigned short var_9 = (unsigned short)49908;
unsigned int var_10 = 247610526U;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)39;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

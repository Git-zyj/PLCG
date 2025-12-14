#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 14368645889262432052ULL;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_16 = (signed char)22;
unsigned long long int var_17 = 5683714551629099169ULL;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 130913913U;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)2;
short var_9 = (short)9336;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1639032582U;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 1592136734U;
unsigned short var_14 = (unsigned short)45180;
void init() {
}

void checksum() {
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

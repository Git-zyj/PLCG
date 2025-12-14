#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7492;
int var_3 = 1990452145;
int var_7 = -1116292486;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 2186514791U;
int zero = 0;
unsigned long long int var_13 = 14267140294975132144ULL;
signed char var_14 = (signed char)-55;
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

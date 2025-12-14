#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10069798093001213987ULL;
_Bool var_3 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)22;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)90;
void init() {
}

void checksum() {
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

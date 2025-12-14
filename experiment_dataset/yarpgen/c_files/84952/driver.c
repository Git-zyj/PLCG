#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5002863865908923844ULL;
short var_6 = (short)-21935;
unsigned long long int var_8 = 10081113329818222872ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)55;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17046743900709700773ULL;
int var_9 = -831801135;
short var_12 = (short)24364;
unsigned char var_13 = (unsigned char)169;
unsigned char var_19 = (unsigned char)28;
int zero = 0;
unsigned long long int var_20 = 12509393237502202641ULL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)218;
unsigned long long int var_24 = 11997654741627396600ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

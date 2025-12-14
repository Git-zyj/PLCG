#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2845323941946729916LL;
unsigned long long int var_1 = 5057133325326388534ULL;
signed char var_4 = (signed char)16;
signed char var_9 = (signed char)79;
int zero = 0;
unsigned char var_11 = (unsigned char)141;
unsigned long long int var_12 = 7815808559300645287ULL;
unsigned int var_13 = 4029582007U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)88;
signed char var_6 = (signed char)-3;
int zero = 0;
unsigned char var_10 = (unsigned char)14;
unsigned long long int var_11 = 15721430842371001982ULL;
long long int var_12 = 7864035211868694148LL;
long long int var_13 = 3362296355664437371LL;
_Bool var_14 = (_Bool)1;
long long int var_15 = 3366400461482338484LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

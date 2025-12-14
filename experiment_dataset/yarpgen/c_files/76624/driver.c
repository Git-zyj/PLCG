#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-4;
signed char var_7 = (signed char)112;
unsigned int var_9 = 709530392U;
unsigned int var_11 = 3351651263U;
unsigned int var_12 = 3689436970U;
long long int var_13 = -2939657832171091147LL;
int zero = 0;
unsigned char var_14 = (unsigned char)83;
long long int var_15 = 5899166997396280565LL;
unsigned int var_16 = 1393016207U;
signed char var_17 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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

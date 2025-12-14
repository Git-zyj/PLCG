#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 745454163;
unsigned char var_6 = (unsigned char)56;
unsigned long long int var_7 = 11834508412793199640ULL;
unsigned int var_12 = 3251255088U;
int zero = 0;
int var_16 = -225635796;
unsigned int var_17 = 95712118U;
long long int var_18 = 5796511101150499317LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

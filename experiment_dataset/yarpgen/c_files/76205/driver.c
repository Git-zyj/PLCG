#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1777180241;
int var_3 = -90449489;
unsigned char var_6 = (unsigned char)207;
unsigned int var_8 = 1849961484U;
short var_9 = (short)31554;
int zero = 0;
long long int var_15 = 9048710499064774231LL;
unsigned int var_16 = 1006223927U;
unsigned int var_17 = 3074605054U;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32040;
long long int var_2 = -6865602065692545203LL;
unsigned int var_8 = 1910115208U;
unsigned short var_18 = (unsigned short)663;
int zero = 0;
unsigned int var_19 = 1192319497U;
long long int var_20 = -2991910718809542831LL;
unsigned long long int var_21 = 9861408797446326609ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

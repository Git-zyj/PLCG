#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42456;
int var_8 = 363811444;
int var_11 = 1462360125;
long long int var_13 = -2041240865814325590LL;
unsigned long long int var_15 = 17132354402036471254ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)244;
long long int var_20 = 5226703538433926789LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

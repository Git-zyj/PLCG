#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -655711267;
unsigned short var_15 = (unsigned short)13962;
unsigned long long int var_19 = 16407162759587412517ULL;
int zero = 0;
unsigned long long int var_20 = 6276870996507120481ULL;
unsigned short var_21 = (unsigned short)2500;
unsigned short var_22 = (unsigned short)54340;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

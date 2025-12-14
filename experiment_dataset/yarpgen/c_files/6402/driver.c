#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2025154073421686165LL;
long long int var_15 = 1128756171574347227LL;
long long int var_18 = 4700350294092037449LL;
int zero = 0;
long long int var_20 = -9070373945421130217LL;
long long int var_21 = -5042236663808112403LL;
long long int var_22 = 3068522889327758671LL;
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

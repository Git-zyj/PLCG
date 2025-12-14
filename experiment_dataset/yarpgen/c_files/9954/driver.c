#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 13467419162355019106ULL;
unsigned long long int var_13 = 18107177577840685521ULL;
unsigned long long int var_18 = 17281518995433690270ULL;
int zero = 0;
signed char var_20 = (signed char)15;
int var_21 = -41736677;
void init() {
}

void checksum() {
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

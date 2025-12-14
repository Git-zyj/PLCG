#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4100076908922343147LL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_14 = 10010961525529692398ULL;
int zero = 0;
unsigned long long int var_17 = 16192370709216532991ULL;
unsigned long long int var_18 = 18427914304832899677ULL;
void init() {
}

void checksum() {
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

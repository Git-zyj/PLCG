#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 630608684095461411ULL;
signed char var_2 = (signed char)27;
signed char var_5 = (signed char)-112;
unsigned long long int var_9 = 2659511315406497940ULL;
unsigned int var_13 = 3818070523U;
int zero = 0;
unsigned int var_14 = 3689937295U;
signed char var_15 = (signed char)60;
void init() {
}

void checksum() {
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

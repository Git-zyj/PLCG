#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)9;
short var_3 = (short)-4997;
int var_4 = 2126193827;
short var_14 = (short)-27265;
signed char var_15 = (signed char)-93;
int zero = 0;
long long int var_16 = -9177498443052294308LL;
long long int var_17 = 5759773017259363888LL;
int var_18 = -70165228;
int var_19 = -890768131;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

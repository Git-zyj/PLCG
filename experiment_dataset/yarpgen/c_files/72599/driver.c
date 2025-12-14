#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5301219929128748384LL;
unsigned char var_6 = (unsigned char)155;
unsigned int var_11 = 4212514588U;
int zero = 0;
unsigned char var_18 = (unsigned char)178;
int var_19 = 762308718;
unsigned long long int var_20 = 3485042211145792811ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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

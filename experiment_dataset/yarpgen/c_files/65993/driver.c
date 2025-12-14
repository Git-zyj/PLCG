#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5330049355166568987LL;
unsigned short var_12 = (unsigned short)26956;
unsigned long long int var_13 = 8381423243873991791ULL;
unsigned int var_15 = 3872815793U;
int zero = 0;
short var_16 = (short)384;
int var_17 = 1193164977;
int var_18 = 367807134;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

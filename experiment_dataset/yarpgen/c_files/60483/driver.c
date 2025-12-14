#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6534726038678222895LL;
long long int var_7 = -6622601809340582605LL;
unsigned long long int var_9 = 3266847109258630730ULL;
short var_17 = (short)-29315;
int zero = 0;
unsigned long long int var_19 = 12411752884634114554ULL;
signed char var_20 = (signed char)-103;
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

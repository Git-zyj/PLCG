#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -347869912818564109LL;
unsigned long long int var_12 = 16207554174376742464ULL;
unsigned long long int var_13 = 7170651593480379174ULL;
int zero = 0;
int var_17 = 1808530617;
signed char var_18 = (signed char)-32;
unsigned long long int var_19 = 16470071873695203864ULL;
void init() {
}

void checksum() {
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

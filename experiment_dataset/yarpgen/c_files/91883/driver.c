#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3343579195340692854ULL;
unsigned long long int var_10 = 16743176574244674753ULL;
long long int var_16 = 3800992632988333470LL;
int zero = 0;
signed char var_19 = (signed char)41;
int var_20 = 740899319;
unsigned long long int var_21 = 2849904794554004413ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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

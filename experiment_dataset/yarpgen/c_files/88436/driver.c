#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)18;
unsigned int var_2 = 1955068485U;
unsigned long long int var_15 = 118366266337410965ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)235;
unsigned long long int var_17 = 11831413441963649437ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

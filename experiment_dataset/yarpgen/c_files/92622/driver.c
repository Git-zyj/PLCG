#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)107;
long long int var_4 = -3971358414180558876LL;
unsigned long long int var_7 = 4316720954588297286ULL;
unsigned int var_11 = 3011269726U;
int zero = 0;
long long int var_13 = -2332961784297428397LL;
unsigned long long int var_14 = 14537490716152791169ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

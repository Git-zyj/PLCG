#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)119;
unsigned long long int var_7 = 5647271720180096235ULL;
int var_8 = 347313969;
unsigned int var_9 = 86928206U;
int zero = 0;
int var_12 = 1069652015;
unsigned short var_13 = (unsigned short)9052;
signed char var_14 = (signed char)89;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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

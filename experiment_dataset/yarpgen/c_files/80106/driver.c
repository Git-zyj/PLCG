#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-59;
unsigned long long int var_1 = 11325115643153870690ULL;
unsigned long long int var_2 = 3694822634691430706ULL;
unsigned short var_4 = (unsigned short)41412;
unsigned short var_9 = (unsigned short)18080;
unsigned long long int var_10 = 11709116349086202851ULL;
int zero = 0;
unsigned int var_11 = 32013621U;
unsigned int var_12 = 1129330205U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

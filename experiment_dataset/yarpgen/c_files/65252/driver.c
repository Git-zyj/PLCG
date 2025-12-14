#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7040295372824046143ULL;
long long int var_4 = 88883998870579655LL;
long long int var_8 = 2815292893001793776LL;
unsigned char var_11 = (unsigned char)176;
long long int var_18 = -2672656009294707291LL;
int zero = 0;
signed char var_19 = (signed char)-88;
int var_20 = -1327881678;
int var_21 = -708134005;
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

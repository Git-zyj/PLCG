#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)114;
int var_11 = -1789273854;
int var_15 = 2102373145;
int zero = 0;
unsigned int var_19 = 3144797195U;
int var_20 = -1796500388;
unsigned short var_21 = (unsigned short)11833;
signed char var_22 = (signed char)-75;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

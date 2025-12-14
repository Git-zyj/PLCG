#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1036938238;
unsigned int var_16 = 3327026798U;
signed char var_17 = (signed char)-79;
int zero = 0;
unsigned long long int var_19 = 12997953777105170886ULL;
unsigned int var_20 = 2847807116U;
unsigned long long int var_21 = 14533350371301973640ULL;
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

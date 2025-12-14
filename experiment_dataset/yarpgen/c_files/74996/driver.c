#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2868663713520544963LL;
signed char var_6 = (signed char)-76;
unsigned char var_13 = (unsigned char)143;
long long int var_15 = -8508693397669094047LL;
int zero = 0;
unsigned long long int var_20 = 3941378718693777265ULL;
unsigned long long int var_21 = 6111297756546302676ULL;
unsigned long long int var_22 = 684509711074823126ULL;
unsigned long long int var_23 = 2952892047343535826ULL;
signed char var_24 = (signed char)11;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

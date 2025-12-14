#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-127;
unsigned long long int var_13 = 13050155719413493937ULL;
unsigned char var_14 = (unsigned char)138;
int zero = 0;
long long int var_16 = -3899708062270841831LL;
unsigned long long int var_17 = 6707024810389665502ULL;
unsigned long long int var_18 = 2328012835980712948ULL;
unsigned long long int var_19 = 3238918912413854492ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

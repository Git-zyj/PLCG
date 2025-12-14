#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 499717971;
long long int var_5 = -3614939927681698828LL;
signed char var_6 = (signed char)44;
unsigned char var_9 = (unsigned char)186;
int zero = 0;
unsigned char var_11 = (unsigned char)144;
unsigned char var_12 = (unsigned char)145;
signed char var_13 = (signed char)34;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

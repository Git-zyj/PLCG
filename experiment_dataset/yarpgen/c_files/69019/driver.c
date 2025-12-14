#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-49;
unsigned char var_2 = (unsigned char)3;
unsigned int var_7 = 1938073064U;
unsigned char var_9 = (unsigned char)234;
int zero = 0;
signed char var_12 = (signed char)35;
long long int var_13 = 7784312583664000445LL;
long long int var_14 = 1557019520652519494LL;
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

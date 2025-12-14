#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25447;
unsigned int var_2 = 3721688349U;
unsigned short var_10 = (unsigned short)5054;
int zero = 0;
unsigned short var_11 = (unsigned short)43044;
long long int var_12 = -870370413487731595LL;
unsigned char var_13 = (unsigned char)85;
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

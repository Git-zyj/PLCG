#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3858243826U;
unsigned int var_4 = 3404003839U;
unsigned short var_5 = (unsigned short)22014;
int zero = 0;
unsigned short var_10 = (unsigned short)59150;
unsigned short var_11 = (unsigned short)10106;
unsigned int var_12 = 4135981945U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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

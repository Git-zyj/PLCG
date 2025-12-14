#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -938345406;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)39;
int var_17 = 1737738316;
unsigned char var_18 = (unsigned char)228;
int zero = 0;
unsigned char var_19 = (unsigned char)116;
unsigned char var_20 = (unsigned char)149;
unsigned int var_21 = 618004748U;
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

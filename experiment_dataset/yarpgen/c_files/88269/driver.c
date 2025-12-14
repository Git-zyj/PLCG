#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1437725682;
unsigned short var_6 = (unsigned short)31794;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)47592;
unsigned short var_14 = (unsigned short)14960;
unsigned short var_15 = (unsigned short)40447;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

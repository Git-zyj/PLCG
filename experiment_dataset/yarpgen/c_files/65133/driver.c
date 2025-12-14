#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
int var_6 = 1157670913;
int var_8 = 434241430;
int var_10 = -350375139;
unsigned char var_15 = (unsigned char)129;
int zero = 0;
long long int var_16 = -8613144756801121240LL;
long long int var_17 = 1102227445405954590LL;
unsigned char var_18 = (unsigned char)55;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

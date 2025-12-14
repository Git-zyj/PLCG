#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10571108416907074567ULL;
unsigned long long int var_5 = 9081819202212844365ULL;
unsigned int var_6 = 1085506216U;
unsigned long long int var_8 = 13853839933177043115ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)46148;
unsigned int var_20 = 2018229805U;
unsigned int var_21 = 1117562821U;
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

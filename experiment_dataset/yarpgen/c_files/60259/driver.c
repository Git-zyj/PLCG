#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 958955125;
unsigned int var_5 = 2861572673U;
int var_8 = -1145920670;
int var_14 = -2043220016;
int zero = 0;
unsigned short var_18 = (unsigned short)55229;
long long int var_19 = -1076741732329389279LL;
void init() {
}

void checksum() {
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

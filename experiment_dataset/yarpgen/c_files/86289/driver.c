#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -2885117441882380352LL;
unsigned char var_10 = (unsigned char)214;
long long int var_15 = -6472972207813706082LL;
int zero = 0;
short var_19 = (short)29235;
unsigned char var_20 = (unsigned char)197;
int var_21 = 744655638;
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

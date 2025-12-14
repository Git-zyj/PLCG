#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3042721432850365413LL;
unsigned char var_2 = (unsigned char)198;
unsigned short var_6 = (unsigned short)63577;
int zero = 0;
unsigned char var_13 = (unsigned char)195;
unsigned short var_14 = (unsigned short)49029;
void init() {
}

void checksum() {
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

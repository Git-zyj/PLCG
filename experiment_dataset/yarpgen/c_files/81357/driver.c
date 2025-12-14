#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64128;
unsigned short var_4 = (unsigned short)37042;
int var_6 = 1177015372;
unsigned int var_8 = 804406307U;
unsigned int var_9 = 1130551409U;
int zero = 0;
unsigned int var_13 = 2424248998U;
unsigned short var_14 = (unsigned short)55957;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13295;
_Bool var_3 = (_Bool)1;
unsigned int var_8 = 1016635028U;
int var_9 = -2009601992;
unsigned short var_10 = (unsigned short)19247;
signed char var_18 = (signed char)-42;
int zero = 0;
unsigned char var_19 = (unsigned char)2;
_Bool var_20 = (_Bool)1;
short var_21 = (short)27422;
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

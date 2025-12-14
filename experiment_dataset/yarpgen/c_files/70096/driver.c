#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)14565;
unsigned char var_7 = (unsigned char)154;
short var_8 = (short)-24353;
unsigned int var_9 = 39700788U;
long long int var_14 = 3044321047996127277LL;
unsigned short var_17 = (unsigned short)42122;
int var_18 = 1564186813;
int zero = 0;
short var_19 = (short)284;
signed char var_20 = (signed char)-25;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

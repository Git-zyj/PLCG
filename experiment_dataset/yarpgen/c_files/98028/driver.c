#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7009578326553073876LL;
short var_4 = (short)-32079;
signed char var_5 = (signed char)-72;
int zero = 0;
unsigned short var_12 = (unsigned short)54820;
short var_13 = (short)16657;
signed char var_14 = (signed char)-50;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1221596944;
short var_5 = (short)18683;
unsigned int var_9 = 1961326481U;
unsigned short var_13 = (unsigned short)57034;
long long int var_15 = 6413858983599486519LL;
unsigned long long int var_18 = 6641449720380583084ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)43988;
int var_20 = -1286267668;
unsigned short var_21 = (unsigned short)59417;
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

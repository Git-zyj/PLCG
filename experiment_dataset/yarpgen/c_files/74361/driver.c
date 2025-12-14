#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3150867901U;
unsigned char var_3 = (unsigned char)38;
long long int var_4 = 1789559783141797278LL;
unsigned long long int var_8 = 10812525745934362910ULL;
unsigned char var_13 = (unsigned char)180;
signed char var_14 = (signed char)117;
int zero = 0;
signed char var_16 = (signed char)-93;
short var_17 = (short)25189;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 474009914U;
long long int var_3 = -8179735586653282482LL;
unsigned short var_9 = (unsigned short)28564;
int zero = 0;
unsigned short var_12 = (unsigned short)11828;
signed char var_13 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

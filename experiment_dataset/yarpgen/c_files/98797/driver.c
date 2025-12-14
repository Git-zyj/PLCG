#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)92;
unsigned char var_8 = (unsigned char)21;
long long int var_9 = -5246006919550802255LL;
int var_14 = -1071515057;
unsigned short var_16 = (unsigned short)39845;
int zero = 0;
unsigned long long int var_18 = 18216632963909596083ULL;
unsigned char var_19 = (unsigned char)65;
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

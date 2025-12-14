#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)224;
unsigned int var_2 = 4040176808U;
unsigned long long int var_6 = 1663566954452995123ULL;
int var_8 = 1186693891;
signed char var_10 = (signed char)98;
int zero = 0;
unsigned long long int var_13 = 91977573005697899ULL;
signed char var_14 = (signed char)-34;
unsigned char var_15 = (unsigned char)178;
unsigned char var_16 = (unsigned char)62;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

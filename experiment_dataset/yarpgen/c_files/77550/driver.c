#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13003551035643656121ULL;
long long int var_5 = -8949808168272383101LL;
signed char var_6 = (signed char)100;
unsigned char var_7 = (unsigned char)32;
signed char var_11 = (signed char)116;
signed char var_12 = (signed char)-96;
int zero = 0;
unsigned short var_13 = (unsigned short)3536;
int var_14 = -1275410087;
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

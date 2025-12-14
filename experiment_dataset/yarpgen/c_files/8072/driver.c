#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)201;
unsigned short var_7 = (unsigned short)44919;
unsigned short var_9 = (unsigned short)56247;
unsigned char var_10 = (unsigned char)241;
int var_12 = 1242460196;
unsigned int var_14 = 1688366438U;
unsigned long long int var_18 = 16060471683447053646ULL;
int zero = 0;
short var_19 = (short)21262;
int var_20 = -395975031;
unsigned int var_21 = 1733777582U;
long long int var_22 = 8051654917757974652LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

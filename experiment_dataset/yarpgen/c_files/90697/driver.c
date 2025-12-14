#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)222;
long long int var_1 = -1509437932224919466LL;
unsigned short var_2 = (unsigned short)36370;
unsigned long long int var_3 = 13244594954062328327ULL;
unsigned int var_5 = 1396595542U;
int zero = 0;
unsigned char var_10 = (unsigned char)114;
unsigned int var_11 = 4137558048U;
short var_12 = (short)-2632;
unsigned char var_13 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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

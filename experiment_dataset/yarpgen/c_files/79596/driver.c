#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3228446266589519671LL;
short var_3 = (short)-10144;
unsigned short var_5 = (unsigned short)37299;
unsigned char var_7 = (unsigned char)84;
int zero = 0;
short var_10 = (short)28381;
unsigned char var_11 = (unsigned char)142;
short var_12 = (short)5366;
int var_13 = -692152156;
unsigned long long int var_14 = 8979663712224021526ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5762198150794017799LL;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)1;
signed char var_8 = (signed char)-54;
unsigned char var_9 = (unsigned char)116;
int var_13 = 1676409187;
int zero = 0;
signed char var_14 = (signed char)18;
short var_15 = (short)-22093;
int var_16 = 1872117511;
void init() {
}

void checksum() {
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

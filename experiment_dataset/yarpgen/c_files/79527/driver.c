#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15117;
long long int var_2 = 4164192096441809414LL;
short var_3 = (short)-14132;
short var_7 = (short)18205;
short var_14 = (short)-21867;
unsigned long long int var_17 = 6270272064697220464ULL;
int zero = 0;
long long int var_20 = -7741033678003079820LL;
unsigned char var_21 = (unsigned char)197;
void init() {
}

void checksum() {
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

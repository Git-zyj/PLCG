#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1944222539U;
short var_2 = (short)26105;
int var_3 = -1536577937;
long long int var_4 = 1684944513327226311LL;
unsigned char var_6 = (unsigned char)126;
unsigned char var_7 = (unsigned char)127;
int zero = 0;
unsigned char var_12 = (unsigned char)231;
int var_13 = 49938659;
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

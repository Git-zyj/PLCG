#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)9038;
long long int var_6 = 3112354206270890768LL;
unsigned short var_13 = (unsigned short)50444;
int zero = 0;
unsigned int var_18 = 244697592U;
unsigned char var_19 = (unsigned char)165;
unsigned int var_20 = 126783189U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

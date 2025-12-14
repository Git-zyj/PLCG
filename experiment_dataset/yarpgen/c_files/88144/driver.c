#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)9;
unsigned short var_3 = (unsigned short)51820;
unsigned char var_16 = (unsigned char)15;
unsigned short var_18 = (unsigned short)64196;
int zero = 0;
long long int var_20 = -1664408236648050760LL;
unsigned short var_21 = (unsigned short)39208;
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

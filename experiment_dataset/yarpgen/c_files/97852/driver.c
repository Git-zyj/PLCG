#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -153595533538308084LL;
unsigned char var_1 = (unsigned char)124;
unsigned long long int var_2 = 10884850828749646527ULL;
unsigned char var_5 = (unsigned char)18;
int var_6 = 1346909099;
int var_8 = 907696683;
int zero = 0;
unsigned short var_15 = (unsigned short)39851;
unsigned char var_16 = (unsigned char)151;
signed char var_17 = (signed char)-49;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20978;
unsigned short var_1 = (unsigned short)47605;
unsigned long long int var_3 = 17622363988560898050ULL;
long long int var_4 = -4129732107760477300LL;
unsigned long long int var_5 = 13935006757775316564ULL;
unsigned short var_7 = (unsigned short)58748;
unsigned long long int var_8 = 8814631777693019778ULL;
unsigned short var_11 = (unsigned short)61284;
unsigned short var_12 = (unsigned short)33880;
unsigned long long int var_14 = 1198833747642781536ULL;
int zero = 0;
unsigned long long int var_15 = 15403156257952402554ULL;
unsigned short var_16 = (unsigned short)27215;
int var_17 = -1957627356;
long long int var_18 = 784044126710719043LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

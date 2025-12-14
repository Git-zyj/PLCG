#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55258;
unsigned short var_1 = (unsigned short)16810;
unsigned short var_7 = (unsigned short)31155;
unsigned short var_8 = (unsigned short)24591;
unsigned short var_9 = (unsigned short)36427;
unsigned short var_12 = (unsigned short)39714;
int zero = 0;
unsigned short var_15 = (unsigned short)50777;
unsigned short var_16 = (unsigned short)14664;
unsigned short var_17 = (unsigned short)25488;
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

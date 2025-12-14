#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18027;
unsigned char var_2 = (unsigned char)113;
int var_10 = 1411769215;
long long int var_16 = -595423482790453399LL;
int zero = 0;
long long int var_18 = -2699114409734603001LL;
int var_19 = -539617174;
short var_20 = (short)-9646;
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

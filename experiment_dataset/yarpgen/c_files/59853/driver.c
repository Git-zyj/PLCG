#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-74;
long long int var_2 = 4754718657265576167LL;
unsigned short var_3 = (unsigned short)24132;
long long int var_5 = 6416692847721352254LL;
long long int var_6 = 477527923060207550LL;
signed char var_9 = (signed char)-50;
int zero = 0;
unsigned short var_11 = (unsigned short)1648;
unsigned char var_12 = (unsigned char)90;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

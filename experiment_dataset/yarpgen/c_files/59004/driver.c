#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18399;
long long int var_3 = 7112051933368965025LL;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)32094;
unsigned char var_7 = (unsigned char)138;
long long int var_10 = -9151164574658911483LL;
short var_13 = (short)1521;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 1723466778;
void init() {
}

void checksum() {
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

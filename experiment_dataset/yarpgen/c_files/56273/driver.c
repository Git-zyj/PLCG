#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)118;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 6870555698711044189ULL;
short var_7 = (short)-39;
int zero = 0;
unsigned short var_16 = (unsigned short)8857;
long long int var_17 = 5961170198952969366LL;
void init() {
}

void checksum() {
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

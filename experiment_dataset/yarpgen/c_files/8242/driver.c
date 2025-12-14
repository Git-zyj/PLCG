#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)24571;
unsigned short var_12 = (unsigned short)4082;
unsigned short var_14 = (unsigned short)34710;
unsigned long long int var_16 = 9832551874672518502ULL;
_Bool var_19 = (_Bool)1;
int zero = 0;
long long int var_20 = 5100117746946430977LL;
unsigned long long int var_21 = 9294875985155582211ULL;
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

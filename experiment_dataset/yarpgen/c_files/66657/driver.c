#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17601175341391085772ULL;
unsigned long long int var_6 = 15447682735873534589ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)46415;
unsigned short var_9 = (unsigned short)19966;
int zero = 0;
int var_11 = -1433407789;
unsigned char var_12 = (unsigned char)193;
long long int var_13 = 591167966167936707LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

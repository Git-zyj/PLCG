#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 209042736800171779LL;
unsigned long long int var_6 = 16581612031201098318ULL;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 1589342167U;
int var_13 = 181332712;
unsigned short var_15 = (unsigned short)50266;
int zero = 0;
unsigned int var_17 = 743783146U;
unsigned short var_18 = (unsigned short)18967;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1194238644371107342LL;
unsigned long long int var_5 = 11332468196987062280ULL;
unsigned char var_7 = (unsigned char)159;
unsigned short var_10 = (unsigned short)20794;
signed char var_12 = (signed char)113;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)58;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

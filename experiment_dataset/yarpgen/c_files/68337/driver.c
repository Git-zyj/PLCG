#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)12;
int var_10 = 745687994;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)43003;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_18 = 293272824;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)35072;
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

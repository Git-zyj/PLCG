#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-99;
_Bool var_8 = (_Bool)1;
signed char var_18 = (signed char)90;
int zero = 0;
long long int var_20 = -1298323678448459149LL;
signed char var_21 = (signed char)18;
unsigned char var_22 = (unsigned char)131;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

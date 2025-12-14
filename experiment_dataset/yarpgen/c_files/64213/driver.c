#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14847;
_Bool var_4 = (_Bool)0;
long long int var_6 = 3785933333505367588LL;
short var_9 = (short)-26478;
long long int var_11 = -6346449795937174026LL;
int zero = 0;
unsigned char var_15 = (unsigned char)124;
long long int var_16 = -2755293979597683794LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

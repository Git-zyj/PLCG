#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5099;
unsigned short var_2 = (unsigned short)64891;
signed char var_3 = (signed char)117;
_Bool var_7 = (_Bool)0;
long long int var_8 = -8005503896669826348LL;
int zero = 0;
unsigned int var_11 = 1380497231U;
short var_12 = (short)-29386;
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

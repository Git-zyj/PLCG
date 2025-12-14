#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)98;
int var_4 = -1872539262;
long long int var_5 = 1861330633499876464LL;
signed char var_12 = (signed char)52;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 8644251640472192916LL;
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

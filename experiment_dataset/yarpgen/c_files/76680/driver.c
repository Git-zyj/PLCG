#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19027;
long long int var_10 = -6458652964243569985LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)51514;
unsigned short var_21 = (unsigned short)18664;
unsigned int var_22 = 3323498546U;
int var_23 = -1629267722;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

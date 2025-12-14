#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)11310;
unsigned short var_6 = (unsigned short)23635;
short var_7 = (short)18131;
short var_15 = (short)2642;
int zero = 0;
unsigned short var_20 = (unsigned short)15424;
short var_21 = (short)25464;
long long int var_22 = -3536013358639726279LL;
short var_23 = (short)-16074;
unsigned long long int var_24 = 3455211066381077043ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

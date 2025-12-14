#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)245;
unsigned short var_2 = (unsigned short)9476;
_Bool var_3 = (_Bool)0;
int var_4 = 673809473;
short var_5 = (short)14374;
short var_6 = (short)-11819;
long long int var_7 = 7240986308904249815LL;
int zero = 0;
int var_14 = -1040539441;
int var_15 = 1775468126;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

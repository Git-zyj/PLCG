#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)10;
signed char var_1 = (signed char)-86;
short var_2 = (short)20908;
unsigned short var_10 = (unsigned short)16605;
int zero = 0;
unsigned short var_12 = (unsigned short)34653;
long long int var_13 = 6029099690111139922LL;
signed char var_14 = (signed char)46;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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

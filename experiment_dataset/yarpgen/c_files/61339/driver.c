#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)228;
long long int var_2 = 8594580867498258347LL;
short var_4 = (short)-30047;
signed char var_16 = (signed char)127;
_Bool var_19 = (_Bool)0;
int zero = 0;
short var_20 = (short)-18915;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)39277;
_Bool var_23 = (_Bool)1;
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

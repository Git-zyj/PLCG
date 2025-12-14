#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)350;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)110;
long long int var_11 = 5360935458240260372LL;
int zero = 0;
unsigned int var_12 = 274710306U;
unsigned char var_13 = (unsigned char)125;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

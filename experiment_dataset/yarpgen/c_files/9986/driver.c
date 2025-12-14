#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
unsigned short var_4 = (unsigned short)27688;
long long int var_5 = 7827430877944875215LL;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)18737;
unsigned int var_15 = 705579497U;
int zero = 0;
long long int var_17 = 2736671034216824533LL;
unsigned char var_18 = (unsigned char)93;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)68;
long long int var_3 = 6984642802665302774LL;
unsigned char var_4 = (unsigned char)124;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)33530;
signed char var_8 = (signed char)44;
signed char var_9 = (signed char)112;
int zero = 0;
unsigned char var_10 = (unsigned char)208;
long long int var_11 = -4571316264708111512LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

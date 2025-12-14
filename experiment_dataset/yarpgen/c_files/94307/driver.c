#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_10 = (unsigned short)39763;
long long int var_11 = -7341881597019528703LL;
long long int var_14 = -1877229048361629419LL;
long long int var_19 = -4833097318647383351LL;
int zero = 0;
long long int var_20 = 975702789165871767LL;
unsigned char var_21 = (unsigned char)38;
unsigned int var_22 = 1021940886U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

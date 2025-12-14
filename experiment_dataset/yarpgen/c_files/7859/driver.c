#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4068728853110460685LL;
long long int var_4 = -7776788485862337007LL;
int var_5 = 467939489;
long long int var_10 = -6115018797232758789LL;
int zero = 0;
unsigned short var_16 = (unsigned short)22245;
_Bool var_17 = (_Bool)1;
short var_18 = (short)8964;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22713;
long long int var_2 = 3542815938160505364LL;
long long int var_4 = 1319630921775432930LL;
unsigned short var_9 = (unsigned short)52983;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)50328;
unsigned short var_15 = (unsigned short)27529;
unsigned short var_16 = (unsigned short)49180;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4886756192108910859LL;
unsigned char var_1 = (unsigned char)209;
long long int var_6 = -1589697707295854608LL;
unsigned short var_13 = (unsigned short)62462;
unsigned short var_14 = (unsigned short)41429;
int zero = 0;
int var_16 = -1785349956;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

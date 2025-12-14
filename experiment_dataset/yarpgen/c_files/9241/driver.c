#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1137959258489578831LL;
unsigned char var_9 = (unsigned char)122;
unsigned short var_10 = (unsigned short)28668;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)4;
int zero = 0;
signed char var_15 = (signed char)-77;
long long int var_16 = -1860126003526677049LL;
void init() {
}

void checksum() {
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

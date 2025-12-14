#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)22817;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 49340820U;
unsigned short var_10 = (unsigned short)13828;
long long int var_13 = 6159208174101581177LL;
int zero = 0;
unsigned char var_17 = (unsigned char)161;
short var_18 = (short)-19266;
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

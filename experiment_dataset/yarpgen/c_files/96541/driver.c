#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 4105870546620775269LL;
short var_13 = (short)-19897;
int zero = 0;
short var_15 = (short)-29232;
int var_16 = -1599106242;
unsigned short var_17 = (unsigned short)61022;
unsigned char var_18 = (unsigned char)22;
long long int var_19 = 6465305949138439761LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

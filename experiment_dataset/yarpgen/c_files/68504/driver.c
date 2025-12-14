#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53871;
unsigned short var_3 = (unsigned short)49130;
long long int var_6 = 619401730785094517LL;
int var_7 = -1814927715;
_Bool var_9 = (_Bool)1;
long long int var_10 = 6331938119336406900LL;
int var_11 = 1789628513;
unsigned short var_12 = (unsigned short)6475;
int zero = 0;
unsigned char var_15 = (unsigned char)24;
unsigned short var_16 = (unsigned short)2113;
long long int var_17 = 8018253037216515701LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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

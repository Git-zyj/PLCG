#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3107322633506771642LL;
unsigned short var_6 = (unsigned short)61366;
unsigned short var_7 = (unsigned short)37691;
long long int var_9 = 7774265420498167773LL;
int zero = 0;
unsigned short var_10 = (unsigned short)5096;
long long int var_11 = -5270442518719923735LL;
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

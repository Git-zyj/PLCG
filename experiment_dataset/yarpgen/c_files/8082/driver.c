#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1844723516;
long long int var_8 = -8968306837707298020LL;
unsigned long long int var_9 = 13541694972157069057ULL;
int zero = 0;
short var_13 = (short)20032;
long long int var_14 = -7969192254279431471LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

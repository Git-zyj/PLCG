#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 427444190697521549LL;
long long int var_1 = 6549302285422404497LL;
long long int var_3 = -3152399476724752763LL;
long long int var_5 = -462009004077192780LL;
long long int var_6 = -1994581781618745137LL;
long long int var_8 = -7330619546336851957LL;
unsigned short var_15 = (unsigned short)10744;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)27853;
unsigned short var_19 = (unsigned short)14296;
void init() {
}

void checksum() {
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

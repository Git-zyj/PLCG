#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6707395353498047339LL;
long long int var_10 = 4728202923102549760LL;
long long int var_13 = 4589231273412214264LL;
long long int var_16 = 644385287259181464LL;
long long int var_17 = -4468752055325330138LL;
int zero = 0;
long long int var_18 = 6687221601336503094LL;
long long int var_19 = -6036679522024185645LL;
long long int var_20 = -3359908877065630861LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1643002896689674980ULL;
long long int var_1 = 5742192013538825208LL;
int var_2 = -1399254657;
unsigned short var_4 = (unsigned short)23165;
unsigned int var_5 = 2654335821U;
unsigned int var_6 = 1462514747U;
long long int var_7 = -2836111335021220751LL;
unsigned long long int var_8 = 6320289859257178629ULL;
long long int var_9 = -1334959341764501976LL;
int zero = 0;
long long int var_10 = 6009184321777081735LL;
unsigned char var_11 = (unsigned char)47;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 1483513649740505799LL;
unsigned int var_9 = 2101619359U;
unsigned char var_12 = (unsigned char)31;
int zero = 0;
long long int var_15 = -2679653666684922077LL;
short var_16 = (short)291;
unsigned long long int var_17 = 7142949759194174318ULL;
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

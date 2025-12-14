#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1105453197164922748LL;
unsigned short var_2 = (unsigned short)64192;
short var_8 = (short)7843;
int zero = 0;
unsigned int var_17 = 1713852252U;
unsigned short var_18 = (unsigned short)31904;
unsigned int var_19 = 1931845407U;
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

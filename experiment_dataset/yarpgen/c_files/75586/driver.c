#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-11448;
unsigned long long int var_5 = 9715214026211903989ULL;
long long int var_8 = -4866265149903480607LL;
unsigned short var_11 = (unsigned short)47574;
short var_12 = (short)-21483;
int zero = 0;
unsigned int var_17 = 3101109732U;
unsigned long long int var_18 = 14640317318303305967ULL;
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

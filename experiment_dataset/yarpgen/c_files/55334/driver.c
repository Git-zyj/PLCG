#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 635914973U;
unsigned int var_10 = 402912314U;
unsigned long long int var_13 = 15677037673933135608ULL;
long long int var_16 = 7343159060203797943LL;
unsigned long long int var_17 = 755478792724791876ULL;
unsigned short var_19 = (unsigned short)34997;
int zero = 0;
unsigned long long int var_20 = 11182769134682278435ULL;
int var_21 = 2080494195;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

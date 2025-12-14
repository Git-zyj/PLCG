#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6266574933393190445LL;
short var_5 = (short)27062;
short var_9 = (short)-30395;
int zero = 0;
unsigned short var_16 = (unsigned short)27871;
short var_17 = (short)20869;
long long int var_18 = -801928636604328448LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

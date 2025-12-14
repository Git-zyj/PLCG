#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)41427;
long long int var_15 = -3212134358102075489LL;
int zero = 0;
unsigned long long int var_17 = 10403365059857714675ULL;
unsigned long long int var_18 = 5748169034907021090ULL;
short var_19 = (short)22173;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9425;
short var_4 = (short)-31792;
short var_9 = (short)-24955;
short var_12 = (short)-3003;
int zero = 0;
short var_20 = (short)19363;
short var_21 = (short)9714;
unsigned long long int var_22 = 13761329138662875979ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18011584014544563832ULL;
short var_3 = (short)17309;
int var_4 = 234380452;
short var_12 = (short)24204;
int zero = 0;
short var_15 = (short)11967;
short var_16 = (short)-24454;
unsigned long long int var_17 = 10402077355506086562ULL;
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

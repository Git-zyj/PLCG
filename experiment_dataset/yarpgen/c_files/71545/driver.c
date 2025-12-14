#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-61;
unsigned int var_8 = 438979398U;
signed char var_16 = (signed char)-19;
int zero = 0;
short var_18 = (short)-10477;
int var_19 = -1295926895;
signed char var_20 = (signed char)72;
unsigned int var_21 = 18473032U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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

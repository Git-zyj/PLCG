#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)13;
short var_2 = (short)21314;
unsigned int var_3 = 3115083968U;
long long int var_4 = -8158792000582850164LL;
int var_7 = 677363934;
long long int var_8 = 5499333662055887399LL;
int zero = 0;
unsigned int var_10 = 3707879828U;
long long int var_11 = 6235525616803890607LL;
long long int var_12 = 7291407506053516121LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

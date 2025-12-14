#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11358490738357523072ULL;
int var_7 = -782862989;
long long int var_8 = -4417875916988274705LL;
long long int var_9 = -358287450110531914LL;
signed char var_15 = (signed char)-77;
int zero = 0;
short var_19 = (short)-23506;
int var_20 = -1376104133;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

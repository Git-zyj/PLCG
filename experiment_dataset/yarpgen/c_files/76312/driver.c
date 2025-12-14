#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)27240;
unsigned long long int var_4 = 13641375293430024054ULL;
unsigned long long int var_15 = 2100090090218948511ULL;
short var_17 = (short)10312;
int zero = 0;
long long int var_19 = -2897619930101615357LL;
unsigned int var_20 = 850141935U;
unsigned int var_21 = 3730669173U;
void init() {
}

void checksum() {
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

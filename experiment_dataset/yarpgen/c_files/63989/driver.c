#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3237609668611452109LL;
short var_2 = (short)11636;
unsigned long long int var_3 = 8334458555142225689ULL;
unsigned int var_7 = 1118672794U;
int zero = 0;
unsigned char var_19 = (unsigned char)196;
short var_20 = (short)-31301;
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

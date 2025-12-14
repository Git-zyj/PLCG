#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)145;
short var_3 = (short)-29047;
unsigned long long int var_12 = 18078720338661081662ULL;
unsigned int var_14 = 2499887944U;
int zero = 0;
long long int var_17 = 7974811482900553535LL;
short var_18 = (short)-8200;
void init() {
}

void checksum() {
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

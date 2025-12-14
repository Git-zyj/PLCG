#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1624798813;
int var_2 = -1826678813;
unsigned int var_6 = 3306334050U;
int var_9 = -1223824909;
int zero = 0;
unsigned int var_14 = 1185216893U;
int var_15 = -1829052220;
int var_16 = 70546528;
unsigned short var_17 = (unsigned short)54028;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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

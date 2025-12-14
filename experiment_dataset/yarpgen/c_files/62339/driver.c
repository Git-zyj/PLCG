#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -480563209;
long long int var_6 = 8201375113411705016LL;
unsigned int var_10 = 3651947703U;
long long int var_11 = -6688150798320690435LL;
int zero = 0;
unsigned int var_13 = 1727461031U;
long long int var_14 = -5125920445130105180LL;
unsigned short var_15 = (unsigned short)9445;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

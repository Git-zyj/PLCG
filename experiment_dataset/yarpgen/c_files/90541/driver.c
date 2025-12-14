#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4710807514264659377ULL;
unsigned short var_3 = (unsigned short)22304;
unsigned int var_9 = 3206537900U;
int var_13 = -1718260258;
long long int var_14 = -8346277526159860611LL;
int zero = 0;
unsigned char var_15 = (unsigned char)86;
long long int var_16 = 8351197494743530689LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

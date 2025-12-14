#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8277608947242949827LL;
unsigned long long int var_6 = 10598876354309124653ULL;
int zero = 0;
int var_19 = -825787582;
unsigned short var_20 = (unsigned short)3946;
unsigned long long int var_21 = 8858215274822540413ULL;
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

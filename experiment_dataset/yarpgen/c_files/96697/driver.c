#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1262856895U;
unsigned int var_2 = 2909119709U;
unsigned int var_6 = 451200943U;
unsigned int var_10 = 3801392643U;
int zero = 0;
unsigned int var_13 = 4099017388U;
unsigned short var_14 = (unsigned short)51492;
long long int var_15 = 7116607255093758582LL;
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

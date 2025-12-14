#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1507910204;
long long int var_4 = -4034731245664106525LL;
unsigned int var_8 = 4252995284U;
unsigned int var_10 = 4246345690U;
unsigned int var_13 = 2616327328U;
int zero = 0;
long long int var_15 = -9082213855494841454LL;
short var_16 = (short)-29930;
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

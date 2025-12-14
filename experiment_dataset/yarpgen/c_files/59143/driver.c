#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17501;
unsigned short var_5 = (unsigned short)58387;
unsigned int var_10 = 3882023196U;
int zero = 0;
int var_15 = 1526649788;
long long int var_16 = -2702277043648489179LL;
short var_17 = (short)464;
unsigned long long int var_18 = 4184812997185280776ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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

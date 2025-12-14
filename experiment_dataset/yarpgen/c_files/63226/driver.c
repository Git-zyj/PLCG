#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1083564496U;
long long int var_3 = -3640589247182234068LL;
unsigned long long int var_4 = 4069383790805719661ULL;
long long int var_8 = -8572093962776766599LL;
unsigned short var_9 = (unsigned short)38083;
unsigned int var_15 = 209490931U;
int zero = 0;
long long int var_17 = 2456990164217020197LL;
unsigned int var_18 = 286840799U;
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

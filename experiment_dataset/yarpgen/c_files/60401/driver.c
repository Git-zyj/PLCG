#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)13546;
int var_6 = -553419698;
unsigned int var_9 = 1604044284U;
long long int var_13 = 9087678114142579239LL;
int zero = 0;
unsigned int var_14 = 926221317U;
unsigned short var_15 = (unsigned short)47177;
int var_16 = -153412363;
unsigned int var_17 = 3735489894U;
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

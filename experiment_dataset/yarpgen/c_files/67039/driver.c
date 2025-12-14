#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16833709524881228104ULL;
unsigned short var_6 = (unsigned short)44630;
unsigned short var_9 = (unsigned short)27389;
unsigned int var_10 = 2847385519U;
int zero = 0;
unsigned int var_11 = 3468675763U;
short var_12 = (short)-27913;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

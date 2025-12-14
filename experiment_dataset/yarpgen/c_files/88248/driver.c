#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15133398252961829516ULL;
unsigned short var_11 = (unsigned short)18762;
unsigned char var_17 = (unsigned char)117;
short var_18 = (short)28192;
int zero = 0;
unsigned short var_20 = (unsigned short)5864;
unsigned int var_21 = 1725216615U;
long long int var_22 = -5555224572138494738LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

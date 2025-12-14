#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4700937799195522380ULL;
long long int var_4 = 729949509124387329LL;
long long int var_8 = 4489822290596350758LL;
unsigned long long int var_11 = 8111947256976459232ULL;
unsigned long long int var_15 = 12784567562887749894ULL;
int var_16 = -978818541;
int zero = 0;
unsigned char var_19 = (unsigned char)75;
unsigned long long int var_20 = 9514956317885986708ULL;
short var_21 = (short)-27495;
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

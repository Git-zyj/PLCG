#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)25;
unsigned char var_7 = (unsigned char)208;
short var_10 = (short)-16194;
int zero = 0;
long long int var_12 = -1820774248541977519LL;
unsigned long long int var_13 = 5145168665475517628ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

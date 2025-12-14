#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1692243408;
int var_3 = 1424096273;
signed char var_4 = (signed char)-33;
short var_5 = (short)-13310;
int var_10 = 1665368088;
int var_12 = 729790618;
int zero = 0;
int var_13 = -338478957;
unsigned char var_14 = (unsigned char)25;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

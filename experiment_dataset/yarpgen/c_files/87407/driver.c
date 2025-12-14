#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-4650;
unsigned long long int var_7 = 17508256880732089708ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)153;
signed char var_16 = (signed char)-69;
unsigned long long int var_17 = 9237385795120175425ULL;
void init() {
}

void checksum() {
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

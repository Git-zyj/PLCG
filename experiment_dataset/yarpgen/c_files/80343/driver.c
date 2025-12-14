#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)106;
short var_3 = (short)5558;
short var_5 = (short)-12724;
short var_14 = (short)11827;
int zero = 0;
short var_16 = (short)25591;
unsigned short var_17 = (unsigned short)29104;
short var_18 = (short)27820;
void init() {
}

void checksum() {
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

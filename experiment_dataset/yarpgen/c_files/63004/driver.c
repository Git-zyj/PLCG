#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)6;
unsigned char var_6 = (unsigned char)187;
unsigned int var_9 = 4245412523U;
int var_12 = -1166196637;
int zero = 0;
short var_14 = (short)29563;
signed char var_15 = (signed char)17;
short var_16 = (short)-3048;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

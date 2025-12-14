#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2904;
short var_5 = (short)31787;
signed char var_6 = (signed char)-101;
short var_7 = (short)-25408;
signed char var_10 = (signed char)-105;
short var_16 = (short)26371;
int zero = 0;
short var_17 = (short)-28103;
unsigned short var_18 = (unsigned short)53895;
unsigned short var_19 = (unsigned short)44806;
signed char var_20 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

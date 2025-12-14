#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1012235650;
signed char var_7 = (signed char)-124;
unsigned char var_8 = (unsigned char)153;
unsigned short var_9 = (unsigned short)23577;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_16 = (short)25262;
unsigned char var_17 = (unsigned char)37;
unsigned char var_18 = (unsigned char)214;
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

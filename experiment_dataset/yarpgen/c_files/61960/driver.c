#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-38;
unsigned long long int var_2 = 18434467667857139152ULL;
unsigned short var_4 = (unsigned short)31366;
unsigned char var_7 = (unsigned char)205;
unsigned long long int var_8 = 11145499584666170645ULL;
unsigned short var_9 = (unsigned short)37796;
unsigned long long int var_11 = 3656198559416332946ULL;
int zero = 0;
short var_12 = (short)1005;
signed char var_13 = (signed char)127;
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

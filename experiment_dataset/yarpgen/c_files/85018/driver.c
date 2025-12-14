#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)57632;
short var_7 = (short)3429;
short var_8 = (short)-24523;
signed char var_9 = (signed char)110;
signed char var_11 = (signed char)-4;
int var_14 = -415761149;
unsigned short var_18 = (unsigned short)55311;
int zero = 0;
signed char var_19 = (signed char)82;
short var_20 = (short)25519;
unsigned long long int var_21 = 14358593237682303332ULL;
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

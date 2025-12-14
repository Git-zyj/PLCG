#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)54339;
long long int var_4 = 7765543477897772872LL;
short var_6 = (short)5865;
unsigned long long int var_12 = 5178930408138202778ULL;
signed char var_13 = (signed char)9;
int var_18 = -2101115978;
int zero = 0;
long long int var_20 = -6768464187621044430LL;
unsigned short var_21 = (unsigned short)18314;
int var_22 = -692539674;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

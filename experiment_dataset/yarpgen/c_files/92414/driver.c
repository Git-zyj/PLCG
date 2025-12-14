#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24886;
unsigned short var_1 = (unsigned short)49417;
short var_3 = (short)26747;
unsigned char var_4 = (unsigned char)167;
_Bool var_5 = (_Bool)1;
short var_8 = (short)21251;
short var_9 = (short)21205;
unsigned short var_12 = (unsigned short)30787;
int zero = 0;
unsigned short var_16 = (unsigned short)20603;
signed char var_17 = (signed char)19;
short var_18 = (short)-12862;
short var_19 = (short)1796;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

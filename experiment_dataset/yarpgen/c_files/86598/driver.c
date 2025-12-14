#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17499;
unsigned long long int var_3 = 3759711173100383525ULL;
unsigned long long int var_4 = 9002435382679141623ULL;
signed char var_5 = (signed char)50;
unsigned char var_6 = (unsigned char)121;
short var_8 = (short)8252;
short var_11 = (short)-13730;
unsigned int var_12 = 3824490021U;
int zero = 0;
int var_13 = -188012814;
unsigned short var_14 = (unsigned short)18174;
unsigned long long int var_15 = 18333870967048687475ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

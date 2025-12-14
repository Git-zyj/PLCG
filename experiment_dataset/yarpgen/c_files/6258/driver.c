#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)4;
unsigned short var_7 = (unsigned short)14083;
int var_10 = 1427740161;
int zero = 0;
signed char var_13 = (signed char)-82;
short var_14 = (short)21567;
long long int var_15 = 3655639821806573412LL;
int var_16 = -1773150271;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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

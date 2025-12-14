#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2273674978U;
unsigned int var_3 = 4019655013U;
int var_4 = -216141525;
unsigned char var_7 = (unsigned char)126;
signed char var_9 = (signed char)-92;
signed char var_11 = (signed char)-41;
int zero = 0;
unsigned short var_19 = (unsigned short)27088;
int var_20 = 1448973479;
unsigned long long int var_21 = 1621047537662433264ULL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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

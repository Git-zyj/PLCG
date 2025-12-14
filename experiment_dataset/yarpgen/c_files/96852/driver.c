#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1575382654U;
unsigned short var_6 = (unsigned short)32754;
unsigned char var_9 = (unsigned char)162;
unsigned char var_11 = (unsigned char)233;
unsigned long long int var_16 = 11812985652191969609ULL;
int zero = 0;
short var_18 = (short)15216;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)98;
void init() {
}

void checksum() {
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

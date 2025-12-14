#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)43;
int zero = 0;
unsigned short var_16 = (unsigned short)57223;
unsigned long long int var_17 = 9484731198151280816ULL;
short var_18 = (short)25165;
signed char var_19 = (signed char)106;
unsigned int var_20 = 3264820532U;
signed char var_21 = (signed char)12;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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

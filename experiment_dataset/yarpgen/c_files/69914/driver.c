#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
short var_2 = (short)-17130;
short var_5 = (short)4633;
unsigned long long int var_15 = 14997596975459946119ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)142;
short var_19 = (short)-19731;
signed char var_20 = (signed char)-11;
unsigned char var_21 = (unsigned char)167;
void init() {
}

void checksum() {
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

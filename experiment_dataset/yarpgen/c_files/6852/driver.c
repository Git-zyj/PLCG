#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18454;
long long int var_2 = -1729108776700444097LL;
unsigned int var_3 = 2428696917U;
long long int var_7 = 2368724190847593577LL;
long long int var_9 = -4706039722901336477LL;
unsigned char var_10 = (unsigned char)47;
int var_11 = 331237214;
unsigned char var_13 = (unsigned char)142;
short var_16 = (short)-11264;
signed char var_17 = (signed char)55;
int zero = 0;
long long int var_20 = -5028448518071019343LL;
int var_21 = -543668493;
signed char var_22 = (signed char)-19;
long long int var_23 = 4396430508560618002LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

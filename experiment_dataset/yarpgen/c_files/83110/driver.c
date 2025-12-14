#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)120;
long long int var_2 = 9084703729541348955LL;
long long int var_6 = -1302919100570798023LL;
short var_7 = (short)25305;
short var_8 = (short)-11519;
short var_10 = (short)-11135;
long long int var_11 = 8380636424964023896LL;
int zero = 0;
int var_12 = 667348734;
unsigned char var_13 = (unsigned char)253;
unsigned long long int var_14 = 6946096160896588845ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-118;
long long int var_2 = -1771651313892023550LL;
int var_3 = 537218249;
short var_4 = (short)8443;
signed char var_5 = (signed char)-37;
unsigned long long int var_7 = 15079126140167601104ULL;
short var_8 = (short)-4626;
unsigned int var_9 = 2412439486U;
int zero = 0;
int var_10 = 1781596098;
unsigned long long int var_11 = 17783848056526453080ULL;
int var_12 = -11332310;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

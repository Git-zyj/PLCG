#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13751998012476542265ULL;
int var_3 = -1860039759;
long long int var_6 = 6219583421065754162LL;
signed char var_7 = (signed char)124;
int var_8 = -1526228605;
short var_9 = (short)27569;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 1689365195272846743ULL;
int zero = 0;
long long int var_14 = 7494042947283219546LL;
int var_15 = -1067022053;
int var_16 = 276235680;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)120;
long long int var_4 = -3277013780655385325LL;
unsigned long long int var_5 = 4459581250792835303ULL;
unsigned long long int var_6 = 971031053940676828ULL;
short var_7 = (short)-3803;
unsigned long long int var_9 = 10726620168520999697ULL;
signed char var_10 = (signed char)57;
_Bool var_11 = (_Bool)1;
short var_12 = (short)1550;
int zero = 0;
long long int var_13 = 80722335221595510LL;
signed char var_14 = (signed char)32;
short var_15 = (short)449;
unsigned long long int var_16 = 15877383991436389828ULL;
short var_17 = (short)10355;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

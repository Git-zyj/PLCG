#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6492;
unsigned long long int var_7 = 8067337207109306891ULL;
signed char var_8 = (signed char)43;
long long int var_10 = 3998897924580738509LL;
unsigned long long int var_12 = 29672551526023373ULL;
long long int var_13 = -3786230693022028327LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 7756800010760878522ULL;
long long int var_20 = -3581170679235024402LL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 4452722988441573590ULL;
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

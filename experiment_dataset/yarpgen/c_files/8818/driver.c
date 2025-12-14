#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 72736058;
unsigned int var_2 = 1408823630U;
int var_3 = -291910110;
unsigned long long int var_4 = 3745681083368911662ULL;
short var_6 = (short)11576;
long long int var_7 = -1197067004706899617LL;
long long int var_8 = 5807928959688013655LL;
int var_9 = -214907395;
long long int var_11 = -7109832153055359643LL;
int zero = 0;
unsigned int var_12 = 1783533371U;
long long int var_13 = 2545998509717214444LL;
unsigned long long int var_14 = 5176268757716783329ULL;
long long int var_15 = -7763314428902574475LL;
unsigned long long int var_16 = 9113335616138882190ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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

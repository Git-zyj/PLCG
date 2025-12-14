#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1403096448;
long long int var_6 = 4990208462504679621LL;
short var_7 = (short)-25993;
short var_9 = (short)16351;
unsigned long long int var_10 = 10495306955820335985ULL;
_Bool var_16 = (_Bool)1;
long long int var_17 = -3624116243763069231LL;
int zero = 0;
unsigned int var_20 = 814395703U;
short var_21 = (short)17656;
unsigned long long int var_22 = 16270367020513884036ULL;
signed char var_23 = (signed char)-76;
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

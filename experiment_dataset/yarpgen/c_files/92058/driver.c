#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27058;
unsigned long long int var_1 = 13816356149794427008ULL;
long long int var_2 = 9165589032028861691LL;
unsigned int var_5 = 2905531619U;
long long int var_6 = -41430566002270233LL;
unsigned int var_7 = 2237681984U;
unsigned long long int var_9 = 12612918519619179574ULL;
int var_10 = 662262981;
long long int var_11 = 2686471004629293645LL;
int zero = 0;
short var_12 = (short)-1288;
unsigned int var_13 = 2371489853U;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2611255143U;
unsigned short var_16 = (unsigned short)11498;
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

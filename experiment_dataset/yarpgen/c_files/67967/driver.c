#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 471693380U;
unsigned long long int var_1 = 8935214975368340033ULL;
unsigned long long int var_3 = 7687724048212286920ULL;
unsigned long long int var_4 = 714268438284165861ULL;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)0;
long long int var_13 = 6891896496086644723LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)38859;
int var_16 = 2020096397;
unsigned long long int var_17 = 12122380248118598501ULL;
void init() {
}

void checksum() {
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

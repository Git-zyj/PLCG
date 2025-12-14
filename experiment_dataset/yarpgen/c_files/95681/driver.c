#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1627274970;
_Bool var_3 = (_Bool)1;
int var_4 = 1968206508;
long long int var_5 = 5140690373830433161LL;
long long int var_7 = -7319822329156758202LL;
int var_8 = -1936854870;
int var_9 = 860303697;
long long int var_10 = -456741513722308802LL;
long long int var_11 = 2302326580501598082LL;
unsigned int var_12 = 3103556911U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 215492415U;
unsigned int var_15 = 3393846538U;
int var_16 = -1625120722;
_Bool var_17 = (_Bool)1;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 701637324U;
long long int var_1 = -64338760936176900LL;
unsigned long long int var_2 = 14504351504793792900ULL;
long long int var_3 = 345436423606295134LL;
unsigned int var_4 = 3434436399U;
long long int var_5 = 7260653483418285897LL;
unsigned long long int var_6 = 11805423056491078787ULL;
unsigned long long int var_11 = 4623160581175115767ULL;
unsigned long long int var_12 = 2732748587731663067ULL;
unsigned int var_13 = 2585146888U;
long long int var_16 = -3667367576567025507LL;
int zero = 0;
long long int var_17 = -6438094423680472841LL;
unsigned long long int var_18 = 8902863732818692593ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

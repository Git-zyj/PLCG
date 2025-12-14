#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4507259819725102022ULL;
unsigned long long int var_1 = 17552307913098164024ULL;
unsigned short var_2 = (unsigned short)58082;
short var_3 = (short)5529;
unsigned long long int var_6 = 7156531522988788900ULL;
short var_7 = (short)-25736;
long long int var_8 = 3908391475210132565LL;
long long int var_9 = -4186018352174959590LL;
int zero = 0;
unsigned long long int var_10 = 2320497194427452952ULL;
unsigned long long int var_11 = 14403614507961734963ULL;
unsigned short var_12 = (unsigned short)18075;
short var_13 = (short)-30303;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4572683538857177056LL;
int var_1 = 18033568;
long long int var_2 = -1791464489971941092LL;
unsigned int var_3 = 4108027665U;
long long int var_4 = -676358759804030570LL;
unsigned long long int var_5 = 811700061948361118ULL;
_Bool var_6 = (_Bool)1;
short var_7 = (short)21235;
long long int var_8 = 9190242772550191976LL;
unsigned int var_9 = 2707246419U;
unsigned short var_11 = (unsigned short)47968;
unsigned int var_13 = 2285284426U;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 16981944498017800558ULL;
short var_17 = (short)-31203;
void init() {
}

void checksum() {
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

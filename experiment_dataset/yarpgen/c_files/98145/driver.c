#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1277904275;
_Bool var_8 = (_Bool)1;
unsigned long long int var_12 = 12301223090934802983ULL;
long long int var_13 = -514978260027112003LL;
unsigned long long int var_15 = 1242430308760934225ULL;
int var_16 = 164444121;
int zero = 0;
unsigned char var_20 = (unsigned char)119;
unsigned long long int var_21 = 10087798344874126641ULL;
unsigned int var_22 = 842590121U;
unsigned long long int var_23 = 10010451156450658672ULL;
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

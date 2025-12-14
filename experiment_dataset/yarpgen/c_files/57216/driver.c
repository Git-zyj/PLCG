#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1666730077;
unsigned long long int var_2 = 2870184702206574108ULL;
int var_3 = 1388897686;
unsigned long long int var_6 = 1894432115183545247ULL;
short var_7 = (short)-26410;
long long int var_8 = 2961683829624319974LL;
long long int var_9 = -7362848358643520645LL;
long long int var_10 = -7685704230186240782LL;
long long int var_15 = 2114342727896152003LL;
int zero = 0;
long long int var_16 = -8389203294527250139LL;
unsigned long long int var_17 = 9268929987098818056ULL;
int var_18 = -974736117;
int var_19 = 330036196;
unsigned long long int var_20 = 607010204301892654ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

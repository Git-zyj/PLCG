#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)84;
unsigned short var_2 = (unsigned short)41027;
unsigned char var_3 = (unsigned char)25;
long long int var_4 = -8804951786015915882LL;
int var_6 = -589567817;
unsigned long long int var_7 = 13284347638575378049ULL;
long long int var_9 = -2080039427541896730LL;
short var_11 = (short)12692;
_Bool var_12 = (_Bool)1;
short var_13 = (short)29622;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 673831095852070241ULL;
long long int var_16 = -7981358714695411014LL;
short var_17 = (short)-26428;
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

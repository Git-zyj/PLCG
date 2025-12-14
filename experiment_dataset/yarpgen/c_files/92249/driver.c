#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -704281372;
unsigned long long int var_1 = 15034994045331457255ULL;
unsigned char var_2 = (unsigned char)59;
int var_4 = -1631551573;
int var_9 = -1261596400;
unsigned short var_11 = (unsigned short)20433;
short var_12 = (short)6282;
int var_13 = 1429831221;
short var_17 = (short)4818;
int zero = 0;
long long int var_20 = 7372211624922476022LL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 14188887214782155669ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

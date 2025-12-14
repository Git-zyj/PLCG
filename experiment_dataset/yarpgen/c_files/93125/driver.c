#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)163;
unsigned short var_1 = (unsigned short)63721;
unsigned int var_2 = 3732021770U;
long long int var_3 = 2460000137657704412LL;
unsigned int var_4 = 2426999560U;
unsigned int var_5 = 2123109107U;
unsigned int var_6 = 4143150990U;
short var_7 = (short)-22770;
int var_9 = -1019914513;
signed char var_12 = (signed char)44;
unsigned short var_13 = (unsigned short)26816;
long long int var_14 = 539254738823120363LL;
unsigned short var_15 = (unsigned short)59242;
unsigned int var_17 = 2198784063U;
unsigned int var_18 = 1048056717U;
int zero = 0;
unsigned long long int var_20 = 15221112491565647264ULL;
unsigned long long int var_21 = 6951388347718663341ULL;
long long int var_22 = 3509519122272106782LL;
unsigned int var_23 = 2426358281U;
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

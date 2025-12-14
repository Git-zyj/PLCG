#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1588928815;
unsigned char var_1 = (unsigned char)230;
unsigned short var_4 = (unsigned short)36134;
long long int var_5 = 4009153100309990559LL;
int var_10 = 1226638506;
int var_13 = 907525926;
short var_14 = (short)-7078;
unsigned long long int var_16 = 16510378459531502778ULL;
unsigned long long int var_17 = 9803664218219863002ULL;
unsigned short var_19 = (unsigned short)25367;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 8174285410239239973ULL;
unsigned long long int var_22 = 15680253696053604800ULL;
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

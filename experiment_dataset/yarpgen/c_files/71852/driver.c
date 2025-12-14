#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5227050055683125775LL;
unsigned short var_4 = (unsigned short)55662;
unsigned short var_5 = (unsigned short)48594;
_Bool var_8 = (_Bool)0;
long long int var_9 = 1300544726407968124LL;
short var_10 = (short)17152;
unsigned short var_12 = (unsigned short)11673;
short var_14 = (short)13990;
unsigned short var_15 = (unsigned short)36688;
unsigned short var_16 = (unsigned short)64036;
unsigned short var_17 = (unsigned short)43420;
short var_19 = (short)25362;
int zero = 0;
unsigned short var_20 = (unsigned short)18470;
short var_21 = (short)-25126;
int var_22 = 820523790;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3431886298635368129LL;
unsigned short var_1 = (unsigned short)4561;
unsigned char var_2 = (unsigned char)245;
long long int var_3 = -1199113158462185810LL;
unsigned long long int var_5 = 15224303106199610386ULL;
unsigned short var_6 = (unsigned short)40107;
long long int var_8 = 777487431141274319LL;
long long int var_11 = 6357448396760918761LL;
short var_13 = (short)-4855;
short var_14 = (short)4674;
unsigned short var_16 = (unsigned short)42423;
unsigned short var_17 = (unsigned short)34246;
short var_18 = (short)6373;
long long int var_19 = 4434969808955420777LL;
int zero = 0;
short var_20 = (short)25854;
short var_21 = (short)-24004;
unsigned short var_22 = (unsigned short)40121;
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

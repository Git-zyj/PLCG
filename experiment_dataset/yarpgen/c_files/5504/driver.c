#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-27261;
_Bool var_5 = (_Bool)1;
short var_9 = (short)-25612;
long long int var_14 = -5329376320062972518LL;
short var_15 = (short)4913;
short var_16 = (short)-15985;
unsigned short var_17 = (unsigned short)64808;
int zero = 0;
unsigned long long int var_19 = 11924928146550631607ULL;
long long int var_20 = 2447571114987927139LL;
unsigned short var_21 = (unsigned short)11605;
int var_22 = 1332988883;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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

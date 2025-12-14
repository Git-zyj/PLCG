#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2603860874051704638LL;
unsigned short var_2 = (unsigned short)1806;
unsigned short var_3 = (unsigned short)42950;
int var_4 = -1890979002;
long long int var_5 = -8569642023644225524LL;
_Bool var_6 = (_Bool)1;
long long int var_8 = 6009454950558017015LL;
unsigned char var_11 = (unsigned char)48;
unsigned short var_13 = (unsigned short)32495;
int zero = 0;
unsigned char var_14 = (unsigned char)235;
unsigned int var_15 = 2470773107U;
int var_16 = -1823399982;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7860100111591323606LL;
long long int var_3 = -1807018794923751779LL;
unsigned long long int var_5 = 5087002853375564209ULL;
unsigned long long int var_6 = 14066392814845931986ULL;
unsigned short var_7 = (unsigned short)61465;
unsigned short var_9 = (unsigned short)8430;
unsigned int var_10 = 922501303U;
short var_12 = (short)13825;
unsigned long long int var_13 = 9905700786022648281ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 6349145816543268711ULL;
long long int var_17 = -4816944754500895399LL;
unsigned long long int var_18 = 15079919645781975723ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

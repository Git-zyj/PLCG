#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)16;
long long int var_3 = 5282783662824775520LL;
short var_4 = (short)-15305;
int var_5 = 1865038276;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 14114331326955575599ULL;
unsigned short var_9 = (unsigned short)21532;
_Bool var_13 = (_Bool)0;
unsigned int var_16 = 1100430158U;
signed char var_18 = (signed char)90;
int zero = 0;
int var_19 = -2044905759;
unsigned int var_20 = 718140248U;
void init() {
}

void checksum() {
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

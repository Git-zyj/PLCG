#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4344772703355951091LL;
unsigned char var_1 = (unsigned char)156;
long long int var_3 = -4905164463136374254LL;
long long int var_4 = 1495585230366117414LL;
short var_5 = (short)-13617;
int var_7 = -5210308;
unsigned short var_8 = (unsigned short)50683;
short var_9 = (short)25767;
unsigned int var_13 = 2905852600U;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)37381;
short var_16 = (short)-28351;
unsigned short var_17 = (unsigned short)27815;
void init() {
}

void checksum() {
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

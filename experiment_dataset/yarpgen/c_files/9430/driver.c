#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1375935356U;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3049194569U;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3562935118U;
long long int var_7 = -3554109350095612081LL;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 1624968289U;
int zero = 0;
unsigned int var_12 = 967207140U;
long long int var_13 = -2275549177891115508LL;
unsigned short var_14 = (unsigned short)33312;
int var_15 = -1049426121;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

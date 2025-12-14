#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 825056009U;
unsigned char var_1 = (unsigned char)177;
unsigned long long int var_2 = 10640804611203637239ULL;
unsigned int var_3 = 3896647155U;
long long int var_4 = 4425881115684576500LL;
unsigned char var_5 = (unsigned char)55;
signed char var_6 = (signed char)-81;
int var_7 = 311600565;
int var_8 = 1710365714;
unsigned char var_9 = (unsigned char)72;
signed char var_10 = (signed char)19;
long long int var_11 = 8553948419099535761LL;
int zero = 0;
signed char var_12 = (signed char)-39;
unsigned long long int var_13 = 5035011159670929542ULL;
unsigned int var_14 = 931359198U;
unsigned int var_15 = 3750982060U;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2381422760575994158LL;
signed char var_2 = (signed char)-64;
long long int var_3 = 7983204351501645730LL;
unsigned int var_4 = 408280276U;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 2839194520U;
long long int var_7 = -1551243029006478260LL;
signed char var_8 = (signed char)-21;
unsigned short var_10 = (unsigned short)38976;
unsigned short var_11 = (unsigned short)64333;
int zero = 0;
unsigned long long int var_12 = 6138812789945791484ULL;
short var_13 = (short)14382;
int var_14 = 1216046939;
signed char var_15 = (signed char)88;
long long int var_16 = -1358235890759256742LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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

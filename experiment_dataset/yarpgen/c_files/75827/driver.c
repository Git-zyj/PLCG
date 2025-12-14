#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28957;
unsigned short var_2 = (unsigned short)33494;
signed char var_4 = (signed char)-10;
unsigned short var_6 = (unsigned short)62827;
unsigned long long int var_7 = 7665036486982866983ULL;
unsigned int var_8 = 793387397U;
short var_10 = (short)12613;
int var_12 = -585902998;
unsigned long long int var_13 = 8752381320988908499ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)20235;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)10134;
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

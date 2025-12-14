#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6851353023248975935ULL;
unsigned long long int var_4 = 17222728478391946238ULL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)70;
int var_9 = 1424251926;
short var_11 = (short)-13697;
unsigned short var_12 = (unsigned short)47717;
int zero = 0;
unsigned long long int var_13 = 11270658942782060819ULL;
short var_14 = (short)5962;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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

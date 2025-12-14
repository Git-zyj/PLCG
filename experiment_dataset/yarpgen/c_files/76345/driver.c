#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-746;
int var_2 = -1299768588;
long long int var_3 = 7489775704270168820LL;
unsigned long long int var_4 = 7788312772626587133ULL;
unsigned int var_5 = 2794806774U;
int var_9 = -995119510;
unsigned char var_10 = (unsigned char)52;
int zero = 0;
unsigned char var_11 = (unsigned char)217;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3764338934U;
int var_14 = -1597425132;
int var_15 = 1448500308;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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

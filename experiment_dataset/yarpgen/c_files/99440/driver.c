#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27521;
unsigned int var_1 = 3654671868U;
unsigned char var_3 = (unsigned char)238;
signed char var_5 = (signed char)6;
_Bool var_6 = (_Bool)1;
int var_7 = 1017642052;
short var_8 = (short)-29627;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 2686481997U;
unsigned short var_12 = (unsigned short)18666;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

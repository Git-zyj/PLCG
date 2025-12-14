#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-31258;
_Bool var_2 = (_Bool)1;
short var_5 = (short)-26856;
unsigned char var_6 = (unsigned char)214;
int zero = 0;
unsigned int var_10 = 2382017912U;
unsigned short var_11 = (unsigned short)12370;
signed char var_12 = (signed char)27;
unsigned long long int var_13 = 7226682758938868513ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 123840602;
unsigned short var_2 = (unsigned short)58238;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1205181523U;
int var_8 = 1591875316;
int zero = 0;
int var_10 = -1107569061;
signed char var_11 = (signed char)10;
int var_12 = -1428741475;
int var_13 = 834240579;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-26483;
unsigned long long int var_8 = 2520498197158147615ULL;
signed char var_14 = (signed char)-70;
unsigned char var_15 = (unsigned char)145;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 8675982488758467146ULL;
short var_21 = (short)-16429;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

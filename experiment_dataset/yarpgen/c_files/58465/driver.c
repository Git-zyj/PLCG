#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-105;
signed char var_7 = (signed char)-77;
unsigned int var_8 = 2486157591U;
unsigned short var_11 = (unsigned short)46864;
unsigned long long int var_12 = 3234707658990172167ULL;
signed char var_13 = (signed char)-27;
unsigned long long int var_14 = 10044640995903973350ULL;
short var_15 = (short)-16676;
int zero = 0;
long long int var_19 = -2513334610739886932LL;
signed char var_20 = (signed char)115;
_Bool var_21 = (_Bool)1;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-35;
unsigned long long int var_6 = 10167115972415090952ULL;
short var_10 = (short)-24301;
int var_11 = 210215749;
unsigned char var_12 = (unsigned char)33;
signed char var_13 = (signed char)79;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -6696393152975544920LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 514572923U;
unsigned long long int var_4 = 16648638809663067411ULL;
unsigned long long int var_7 = 17590839111426966380ULL;
short var_8 = (short)-21056;
unsigned short var_9 = (unsigned short)21416;
signed char var_11 = (signed char)-69;
long long int var_13 = 8229352934039215240LL;
signed char var_15 = (signed char)-20;
unsigned long long int var_16 = 11032931002022683834ULL;
int zero = 0;
signed char var_17 = (signed char)64;
unsigned int var_18 = 3696222511U;
unsigned short var_19 = (unsigned short)38553;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

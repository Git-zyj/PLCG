#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-72;
long long int var_1 = 2954326902184779857LL;
unsigned int var_4 = 559564055U;
short var_5 = (short)-12065;
long long int var_6 = 4098045286464139971LL;
unsigned long long int var_10 = 15869579856830225635ULL;
signed char var_12 = (signed char)-107;
unsigned short var_13 = (unsigned short)50989;
signed char var_15 = (signed char)75;
int zero = 0;
unsigned long long int var_17 = 7627785781411407130ULL;
long long int var_18 = -2552641099708553850LL;
unsigned long long int var_19 = 14386630183696447802ULL;
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

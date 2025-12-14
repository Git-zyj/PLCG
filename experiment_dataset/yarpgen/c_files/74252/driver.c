#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)153;
unsigned char var_2 = (unsigned char)190;
unsigned long long int var_5 = 4306693802971029825ULL;
long long int var_8 = -875739002205027711LL;
unsigned long long int var_9 = 10269466738088799838ULL;
int zero = 0;
short var_11 = (short)-31522;
unsigned char var_12 = (unsigned char)43;
unsigned short var_13 = (unsigned short)50834;
void init() {
}

void checksum() {
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

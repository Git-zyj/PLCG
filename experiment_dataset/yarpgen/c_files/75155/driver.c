#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3409656476823670325LL;
unsigned char var_2 = (unsigned char)45;
signed char var_4 = (signed char)-104;
signed char var_5 = (signed char)-85;
short var_6 = (short)-27331;
long long int var_14 = 4563276113047821996LL;
int zero = 0;
long long int var_16 = -5851430018422164160LL;
unsigned int var_17 = 3204248384U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

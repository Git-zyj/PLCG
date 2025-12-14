#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9398672460474361935ULL;
unsigned long long int var_1 = 14976094035213660731ULL;
short var_4 = (short)31985;
unsigned short var_8 = (unsigned short)41205;
unsigned char var_9 = (unsigned char)18;
int zero = 0;
long long int var_11 = -1271660028032592056LL;
unsigned long long int var_12 = 9635096587939278188ULL;
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

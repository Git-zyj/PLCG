#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -192538190;
unsigned int var_2 = 830828659U;
long long int var_9 = 8284224210095230745LL;
int zero = 0;
long long int var_13 = -2258549334910113740LL;
unsigned char var_14 = (unsigned char)251;
unsigned long long int var_15 = 3197358155197622043ULL;
long long int var_16 = -7644849932263937179LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

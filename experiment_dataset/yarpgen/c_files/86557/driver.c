#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 606130307U;
unsigned int var_4 = 3412509744U;
unsigned short var_7 = (unsigned short)18998;
long long int var_8 = -9085538321433788506LL;
long long int var_9 = -4075804741633947915LL;
int zero = 0;
unsigned int var_10 = 165533324U;
long long int var_11 = 1826771815281926122LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

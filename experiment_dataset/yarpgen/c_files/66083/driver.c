#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23950;
_Bool var_2 = (_Bool)0;
unsigned int var_6 = 431068498U;
int zero = 0;
signed char var_10 = (signed char)-44;
unsigned int var_11 = 3113529481U;
unsigned char var_12 = (unsigned char)100;
unsigned long long int var_13 = 13885438257264811511ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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

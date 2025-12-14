#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3580;
unsigned short var_3 = (unsigned short)30151;
unsigned int var_5 = 2188879587U;
signed char var_7 = (signed char)54;
long long int var_8 = 7655172412830800965LL;
long long int var_9 = 5699574766817328037LL;
int zero = 0;
short var_10 = (short)21035;
unsigned short var_11 = (unsigned short)35632;
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

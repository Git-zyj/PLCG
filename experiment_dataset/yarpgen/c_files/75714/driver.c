#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23634;
int var_3 = 1518213868;
unsigned long long int var_5 = 18024851909684254371ULL;
short var_6 = (short)-32070;
signed char var_9 = (signed char)-115;
int zero = 0;
short var_10 = (short)28961;
unsigned long long int var_11 = 5240895494107759354ULL;
unsigned short var_12 = (unsigned short)63585;
int var_13 = -474390983;
short var_14 = (short)-6972;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

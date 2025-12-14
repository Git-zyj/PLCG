#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6957;
int var_2 = 383703287;
unsigned long long int var_3 = 5039340582766463636ULL;
unsigned int var_5 = 2533258062U;
unsigned char var_7 = (unsigned char)218;
signed char var_11 = (signed char)-106;
int zero = 0;
short var_16 = (short)30038;
signed char var_17 = (signed char)-95;
unsigned char var_18 = (unsigned char)151;
int var_19 = 1685782383;
signed char var_20 = (signed char)63;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

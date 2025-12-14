#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9646280946726497558ULL;
unsigned char var_3 = (unsigned char)111;
signed char var_4 = (signed char)-34;
long long int var_7 = 8877083706218840684LL;
signed char var_9 = (signed char)6;
signed char var_10 = (signed char)-123;
short var_11 = (short)-10968;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_17 = -807488174;
unsigned char var_18 = (unsigned char)157;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

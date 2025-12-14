#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54158;
unsigned int var_2 = 2292035342U;
_Bool var_3 = (_Bool)1;
int var_9 = 90170757;
unsigned long long int var_10 = 10269578459480941989ULL;
int zero = 0;
int var_14 = 2145633852;
signed char var_15 = (signed char)38;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

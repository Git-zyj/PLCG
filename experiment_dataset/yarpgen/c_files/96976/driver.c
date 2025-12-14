#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1746813455;
unsigned long long int var_1 = 9742711320923872810ULL;
unsigned short var_3 = (unsigned short)14235;
int var_4 = 2107199787;
unsigned short var_5 = (unsigned short)16950;
_Bool var_6 = (_Bool)0;
long long int var_9 = -6955622049316128294LL;
int zero = 0;
unsigned char var_11 = (unsigned char)237;
unsigned char var_12 = (unsigned char)69;
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

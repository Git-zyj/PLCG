#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)34;
long long int var_2 = 9173824902041422900LL;
unsigned char var_6 = (unsigned char)231;
_Bool var_9 = (_Bool)1;
long long int var_13 = -8937578174441489678LL;
long long int var_15 = -2729838272474751233LL;
int zero = 0;
long long int var_19 = -8827212212056628532LL;
signed char var_20 = (signed char)-110;
signed char var_21 = (signed char)-111;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

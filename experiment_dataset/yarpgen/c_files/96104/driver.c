#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -350998016644880474LL;
long long int var_7 = -9142760822767365363LL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)188;
unsigned char var_11 = (unsigned char)31;
_Bool var_13 = (_Bool)0;
unsigned char var_17 = (unsigned char)105;
unsigned char var_18 = (unsigned char)35;
int zero = 0;
unsigned char var_19 = (unsigned char)45;
unsigned char var_20 = (unsigned char)98;
unsigned char var_21 = (unsigned char)43;
unsigned char var_22 = (unsigned char)10;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

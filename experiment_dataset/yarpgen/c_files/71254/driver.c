#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-25589;
signed char var_6 = (signed char)-29;
unsigned char var_9 = (unsigned char)106;
int var_14 = 1511485194;
int zero = 0;
int var_17 = -1017950361;
unsigned long long int var_18 = 7792581950974524135ULL;
_Bool var_19 = (_Bool)0;
int var_20 = 857958762;
long long int var_21 = 9112093959600257471LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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

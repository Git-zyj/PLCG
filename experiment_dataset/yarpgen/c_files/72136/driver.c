#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1623769227;
_Bool var_6 = (_Bool)0;
int var_13 = 1122875184;
int zero = 0;
unsigned long long int var_17 = 13363865011752679675ULL;
int var_18 = -1381945705;
unsigned char var_19 = (unsigned char)223;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

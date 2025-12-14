#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8593880713906551291LL;
unsigned char var_2 = (unsigned char)161;
_Bool var_4 = (_Bool)0;
int var_8 = 1999989618;
int var_12 = 632280932;
int var_13 = -156541166;
long long int var_15 = 6877233683970675092LL;
int zero = 0;
unsigned int var_18 = 4136084347U;
short var_19 = (short)-25088;
int var_20 = 1702480787;
void init() {
}

void checksum() {
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

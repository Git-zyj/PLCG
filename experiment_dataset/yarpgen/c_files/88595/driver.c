#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55297;
int var_4 = 668731913;
signed char var_5 = (signed char)13;
long long int var_8 = 3919715314508085876LL;
unsigned char var_9 = (unsigned char)240;
unsigned long long int var_10 = 15948663985744992968ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_16 = 1274552703;
short var_17 = (short)-10799;
unsigned long long int var_18 = 8740838834450566929ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

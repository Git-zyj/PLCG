#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 374771703U;
int var_3 = 283342412;
unsigned char var_5 = (unsigned char)34;
unsigned char var_9 = (unsigned char)28;
int zero = 0;
long long int var_12 = -8050616236976986266LL;
unsigned long long int var_13 = 11952994908359361792ULL;
short var_14 = (short)2959;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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

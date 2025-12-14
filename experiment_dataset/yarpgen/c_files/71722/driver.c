#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4008926222634866843LL;
long long int var_2 = -8157658548281660354LL;
unsigned short var_3 = (unsigned short)37357;
unsigned short var_4 = (unsigned short)34370;
unsigned long long int var_5 = 17176314592552074471ULL;
unsigned short var_9 = (unsigned short)65470;
int zero = 0;
unsigned char var_10 = (unsigned char)249;
unsigned int var_11 = 504943876U;
unsigned short var_12 = (unsigned short)47463;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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

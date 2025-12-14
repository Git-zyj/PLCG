#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38148;
int var_1 = 1358587105;
int var_2 = -1446386402;
unsigned short var_4 = (unsigned short)21966;
unsigned char var_6 = (unsigned char)183;
unsigned int var_7 = 2464360379U;
long long int var_9 = -469149295489632402LL;
signed char var_13 = (signed char)95;
int zero = 0;
signed char var_14 = (signed char)-87;
_Bool var_15 = (_Bool)1;
int var_16 = -978546518;
unsigned long long int var_17 = 5695333330304343754ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

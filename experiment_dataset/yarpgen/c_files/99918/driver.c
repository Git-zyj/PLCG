#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)102;
long long int var_4 = 3075524172456888373LL;
short var_5 = (short)7897;
unsigned int var_6 = 2280799936U;
signed char var_8 = (signed char)36;
unsigned long long int var_9 = 2140075361147900039ULL;
int zero = 0;
short var_10 = (short)-31210;
unsigned short var_11 = (unsigned short)63478;
int var_12 = 104247155;
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

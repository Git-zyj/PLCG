#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)71;
unsigned long long int var_4 = 16083430681959654606ULL;
short var_5 = (short)-2300;
int var_6 = 873531309;
signed char var_8 = (signed char)72;
int var_9 = -1642969365;
unsigned int var_10 = 4032038882U;
int var_11 = 520978320;
int zero = 0;
long long int var_13 = -5219894308304457011LL;
long long int var_14 = 946613789998266654LL;
int var_15 = 135270235;
unsigned long long int var_16 = 15670392621759891080ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

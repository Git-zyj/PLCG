#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -296635339136435236LL;
short var_2 = (short)17063;
long long int var_4 = 1275982538116436511LL;
long long int var_8 = 4633496816698264139LL;
signed char var_9 = (signed char)-49;
signed char var_10 = (signed char)-60;
int zero = 0;
short var_11 = (short)-3482;
unsigned int var_12 = 1420311819U;
unsigned int var_13 = 2779836480U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

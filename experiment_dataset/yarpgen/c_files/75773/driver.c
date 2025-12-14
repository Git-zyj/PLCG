#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 452624599;
signed char var_4 = (signed char)112;
int var_5 = 1662923131;
int var_9 = -784268540;
long long int var_12 = 8911511392237213077LL;
signed char var_14 = (signed char)-63;
int zero = 0;
unsigned int var_15 = 2483319986U;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 7064946763793824569LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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

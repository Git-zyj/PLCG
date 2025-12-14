#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9223132870141233404LL;
unsigned int var_2 = 1433758470U;
unsigned char var_3 = (unsigned char)125;
unsigned int var_7 = 3190529813U;
long long int var_8 = 2973121532796059542LL;
unsigned short var_9 = (unsigned short)27002;
unsigned short var_10 = (unsigned short)41468;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_13 = -1807037791823968743LL;
long long int var_14 = -6775011079649215517LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

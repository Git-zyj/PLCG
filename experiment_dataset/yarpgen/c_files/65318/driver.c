#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10011236961230192648ULL;
long long int var_1 = -7296150656763593151LL;
long long int var_2 = -462207579917369285LL;
int var_4 = 781293777;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 9509199779573469913ULL;
unsigned char var_10 = (unsigned char)129;
unsigned short var_11 = (unsigned short)29058;
int var_13 = -1596920425;
unsigned short var_14 = (unsigned short)48276;
unsigned int var_16 = 1011272910U;
unsigned int var_17 = 2352607533U;
int zero = 0;
short var_18 = (short)-4136;
signed char var_19 = (signed char)-15;
_Bool var_20 = (_Bool)0;
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

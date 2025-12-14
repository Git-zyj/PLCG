#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)61;
long long int var_2 = -4641545992237459369LL;
int var_3 = -438313968;
signed char var_9 = (signed char)72;
unsigned int var_12 = 1886133899U;
unsigned short var_14 = (unsigned short)37332;
int var_16 = -1812041358;
int zero = 0;
signed char var_17 = (signed char)-108;
signed char var_18 = (signed char)-20;
unsigned long long int var_19 = 9358796704847587445ULL;
unsigned char var_20 = (unsigned char)153;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

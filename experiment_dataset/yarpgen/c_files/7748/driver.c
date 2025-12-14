#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7090249188048168655ULL;
int var_5 = -1561825485;
signed char var_6 = (signed char)-127;
unsigned int var_8 = 3881072141U;
unsigned long long int var_9 = 4075289064195948953ULL;
int zero = 0;
signed char var_17 = (signed char)-87;
unsigned long long int var_18 = 4386334627083366601ULL;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)11730;
unsigned int var_21 = 4208398568U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

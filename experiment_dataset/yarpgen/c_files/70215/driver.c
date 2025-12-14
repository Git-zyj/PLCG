#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 246967605;
unsigned int var_2 = 836966064U;
long long int var_3 = -6250123666414791109LL;
int var_8 = -2007373602;
int var_9 = -235959393;
unsigned short var_10 = (unsigned short)41445;
signed char var_14 = (signed char)-102;
signed char var_15 = (signed char)59;
int var_17 = 1114551570;
unsigned int var_18 = 400875505U;
int var_19 = 1174706732;
int zero = 0;
long long int var_20 = 7455065255546812130LL;
int var_21 = -548968884;
int var_22 = 698559948;
unsigned int var_23 = 2251561146U;
signed char var_24 = (signed char)-86;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

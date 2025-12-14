#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15121;
unsigned long long int var_2 = 4993122652189384105ULL;
unsigned long long int var_3 = 6523924175796584090ULL;
unsigned long long int var_6 = 15501859062415529987ULL;
unsigned short var_9 = (unsigned short)30534;
long long int var_10 = 4498366224370227687LL;
signed char var_12 = (signed char)-76;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)33868;
unsigned long long int var_16 = 8986041621536393204ULL;
int zero = 0;
unsigned long long int var_17 = 16499429906303538983ULL;
int var_18 = 253532233;
int var_19 = -122753488;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

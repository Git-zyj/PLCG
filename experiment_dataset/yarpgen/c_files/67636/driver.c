#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)93;
short var_4 = (short)19382;
unsigned long long int var_9 = 17724882409970631656ULL;
unsigned long long int var_10 = 6136028643381298924ULL;
unsigned int var_11 = 4159867104U;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = -751340831;
short var_20 = (short)22949;
signed char var_21 = (signed char)92;
short var_22 = (short)-13682;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

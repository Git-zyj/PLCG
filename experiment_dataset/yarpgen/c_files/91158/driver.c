#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8843305134750875228LL;
long long int var_2 = -4255836167360970918LL;
_Bool var_3 = (_Bool)0;
int var_6 = -2113690126;
unsigned long long int var_14 = 3466141021542982918ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_17 = 2075496101;
short var_18 = (short)15517;
unsigned long long int var_19 = 15420110002379437450ULL;
signed char var_20 = (signed char)-1;
long long int var_21 = 6346456462923865454LL;
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

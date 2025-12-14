#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40591;
_Bool var_2 = (_Bool)1;
int var_4 = 651870373;
_Bool var_5 = (_Bool)1;
signed char var_8 = (signed char)-24;
unsigned int var_9 = 854720804U;
long long int var_11 = -5210341631268791487LL;
unsigned short var_12 = (unsigned short)49631;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 735594165U;
int var_16 = -2004090983;
unsigned short var_17 = (unsigned short)36901;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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

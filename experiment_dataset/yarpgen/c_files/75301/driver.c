#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17709942381036101194ULL;
unsigned short var_1 = (unsigned short)27550;
int var_2 = 2061480522;
unsigned short var_5 = (unsigned short)43429;
signed char var_6 = (signed char)-118;
unsigned long long int var_8 = 15870959617505475399ULL;
unsigned long long int var_9 = 6614739142568289600ULL;
signed char var_10 = (signed char)-35;
unsigned long long int var_12 = 5160596177491598600ULL;
short var_13 = (short)-31292;
unsigned long long int var_14 = 1687929222629903823ULL;
int zero = 0;
unsigned long long int var_16 = 15560787075756485487ULL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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

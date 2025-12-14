#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1918403980695769259LL;
unsigned long long int var_2 = 8284595293851140216ULL;
unsigned long long int var_4 = 7857329931322320311ULL;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-40;
unsigned long long int var_8 = 2764966766820912202ULL;
_Bool var_9 = (_Bool)0;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_15 = (short)1159;
long long int var_16 = -4875279066735246694LL;
unsigned int var_17 = 3133009335U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

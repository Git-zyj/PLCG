#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)121;
short var_3 = (short)26400;
short var_5 = (short)-31769;
short var_6 = (short)10877;
signed char var_8 = (signed char)-52;
long long int var_10 = 5307415973916785751LL;
unsigned int var_12 = 2397992105U;
unsigned long long int var_13 = 16384107971285621295ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
long long int var_19 = 1226341893274047292LL;
_Bool var_20 = (_Bool)1;
long long int var_21 = 4150930431789878589LL;
signed char var_22 = (signed char)-29;
void init() {
}

void checksum() {
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

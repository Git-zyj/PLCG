#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13408489913957477644ULL;
long long int var_1 = -3097940463894519592LL;
unsigned int var_2 = 813835368U;
int var_4 = -640762469;
signed char var_6 = (signed char)117;
unsigned int var_7 = 2075124947U;
_Bool var_8 = (_Bool)0;
short var_9 = (short)17703;
long long int var_10 = -8355147391530941590LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 1161888932U;
short var_17 = (short)22166;
int var_18 = -725513316;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

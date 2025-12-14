#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)117;
short var_3 = (short)-31892;
long long int var_4 = -4354124802410285604LL;
long long int var_6 = -3309155869495603672LL;
unsigned short var_7 = (unsigned short)27239;
_Bool var_9 = (_Bool)1;
short var_10 = (short)31349;
long long int var_12 = 5407648334246406368LL;
long long int var_14 = -9035736524712498522LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
long long int var_17 = 8495874993345240069LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 5993209782943421171ULL;
long long int var_5 = 4715028266280681197LL;
long long int var_7 = 693388512302948599LL;
signed char var_8 = (signed char)-125;
unsigned long long int var_9 = 5429928430730756307ULL;
short var_11 = (short)-2163;
unsigned short var_12 = (unsigned short)14654;
unsigned int var_14 = 1331636392U;
unsigned int var_15 = 549641916U;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 2106234074U;
unsigned int var_18 = 3106298176U;
unsigned int var_19 = 1196505792U;
unsigned long long int var_20 = 16924576996791731538ULL;
int var_21 = 1158327167;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

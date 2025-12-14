#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1156589426;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
long long int var_4 = 8077394149686348433LL;
int var_5 = -577263118;
unsigned short var_6 = (unsigned short)11905;
unsigned int var_7 = 3681764190U;
unsigned long long int var_8 = 7886904206911300567ULL;
unsigned long long int var_10 = 3464513335316625050ULL;
signed char var_11 = (signed char)-34;
long long int var_12 = -6568361055243546023LL;
int zero = 0;
signed char var_14 = (signed char)68;
long long int var_15 = 3346922981872618846LL;
short var_16 = (short)7501;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)115;
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

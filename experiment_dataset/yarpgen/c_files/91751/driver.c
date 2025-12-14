#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -848872775;
unsigned short var_2 = (unsigned short)32033;
long long int var_3 = -2013038134808504500LL;
int var_7 = -1572053382;
unsigned char var_10 = (unsigned char)209;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_16 = (short)-13079;
unsigned long long int var_17 = 1529094528079822918ULL;
signed char var_18 = (signed char)53;
short var_19 = (short)-719;
signed char var_20 = (signed char)20;
signed char var_21 = (signed char)27;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

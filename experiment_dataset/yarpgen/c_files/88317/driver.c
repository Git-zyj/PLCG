#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)26;
signed char var_3 = (signed char)-50;
long long int var_6 = -1985004931400975374LL;
unsigned long long int var_7 = 12316295649382958868ULL;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)1;
signed char var_14 = (signed char)9;
int var_16 = 970531775;
int zero = 0;
short var_18 = (short)-28026;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-72;
unsigned char var_21 = (unsigned char)19;
short var_22 = (short)9301;
void init() {
}

void checksum() {
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

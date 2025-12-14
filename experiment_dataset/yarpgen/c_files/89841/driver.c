#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
unsigned int var_1 = 3598049942U;
unsigned short var_3 = (unsigned short)37005;
unsigned long long int var_4 = 13587394915067900192ULL;
_Bool var_5 = (_Bool)1;
long long int var_6 = 2732272924271701738LL;
int var_7 = 2063503371;
unsigned int var_8 = 1676966832U;
_Bool var_9 = (_Bool)1;
long long int var_10 = -6173233393701693812LL;
unsigned short var_11 = (unsigned short)12731;
unsigned short var_12 = (unsigned short)62549;
unsigned short var_13 = (unsigned short)18147;
long long int var_15 = 2030937346679796094LL;
unsigned long long int var_16 = 15675369681126048721ULL;
short var_18 = (short)31424;
int zero = 0;
signed char var_19 = (signed char)-94;
unsigned long long int var_20 = 4328604214063970987ULL;
int var_21 = 1082010660;
int var_22 = -775989886;
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

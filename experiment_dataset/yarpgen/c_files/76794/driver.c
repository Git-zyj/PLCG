#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5481685233566474684LL;
signed char var_1 = (signed char)-32;
long long int var_3 = -5758331306018565987LL;
signed char var_4 = (signed char)-105;
short var_5 = (short)-5379;
short var_6 = (short)-23349;
long long int var_7 = -5195764608981718642LL;
signed char var_8 = (signed char)-12;
signed char var_9 = (signed char)82;
short var_10 = (short)-12661;
long long int var_11 = 1052755988763852628LL;
unsigned char var_12 = (unsigned char)169;
unsigned char var_13 = (unsigned char)83;
signed char var_14 = (signed char)98;
short var_15 = (short)-22541;
int zero = 0;
long long int var_17 = 6406190956020925655LL;
long long int var_18 = -899903465760508319LL;
signed char var_19 = (signed char)-42;
unsigned char var_20 = (unsigned char)7;
unsigned char var_21 = (unsigned char)118;
signed char var_22 = (signed char)16;
short var_23 = (short)8737;
unsigned char var_24 = (unsigned char)36;
short var_25 = (short)-13023;
short var_26 = (short)-32452;
short var_27 = (short)24558;
signed char var_28 = (signed char)-2;
long long int var_29 = 7824730432350633675LL;
long long int var_30 = -7536263986661167301LL;
signed char var_31 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

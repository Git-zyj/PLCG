#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26242;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-20223;
long long int var_6 = -1367562629080394822LL;
unsigned short var_13 = (unsigned short)57870;
short var_14 = (short)-11658;
long long int var_17 = 8551600485006391551LL;
int zero = 0;
signed char var_18 = (signed char)-67;
long long int var_19 = 1259179011907772142LL;
int var_20 = 542392098;
long long int var_21 = 895323250532930732LL;
unsigned long long int var_22 = 18250391690973237880ULL;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9573;
unsigned short var_1 = (unsigned short)51838;
unsigned short var_2 = (unsigned short)5567;
unsigned short var_3 = (unsigned short)16640;
long long int var_4 = 247276483394110247LL;
unsigned short var_5 = (unsigned short)51883;
int var_6 = 1669347737;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)21306;
unsigned char var_9 = (unsigned char)181;
unsigned long long int var_10 = 7818816977312422680ULL;
unsigned char var_11 = (unsigned char)210;
unsigned short var_12 = (unsigned short)55017;
unsigned short var_13 = (unsigned short)28300;
unsigned long long int var_14 = 11247914258655401905ULL;
int zero = 0;
signed char var_15 = (signed char)-11;
unsigned long long int var_16 = 16223551639731818913ULL;
unsigned short var_17 = (unsigned short)64166;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

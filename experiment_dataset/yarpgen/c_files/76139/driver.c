#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)9;
unsigned long long int var_4 = 10251027245072031419ULL;
unsigned int var_5 = 4080774295U;
unsigned short var_7 = (unsigned short)13800;
unsigned short var_8 = (unsigned short)19752;
unsigned int var_9 = 4102982214U;
short var_11 = (short)6302;
long long int var_12 = 5808001024400568322LL;
unsigned short var_14 = (unsigned short)23759;
long long int var_15 = -3438164477584704519LL;
unsigned long long int var_16 = 4101824440812512660ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)7440;
signed char var_19 = (signed char)-52;
unsigned int var_20 = 4069267626U;
unsigned char var_21 = (unsigned char)29;
void init() {
}

void checksum() {
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

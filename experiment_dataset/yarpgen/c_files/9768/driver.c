#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2920;
unsigned long long int var_1 = 10364078003705752846ULL;
signed char var_2 = (signed char)106;
unsigned int var_3 = 62899867U;
_Bool var_4 = (_Bool)1;
short var_5 = (short)22514;
long long int var_7 = -2703301152908801767LL;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)54783;
unsigned long long int var_12 = 17761262025031191616ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = -412817388;
unsigned int var_15 = 1184210463U;
unsigned int var_16 = 3173388462U;
unsigned int var_17 = 4241469714U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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

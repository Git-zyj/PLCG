#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29318;
long long int var_1 = 7223860587164739464LL;
unsigned long long int var_2 = 681217963620311693ULL;
unsigned long long int var_3 = 6117069491940437407ULL;
short var_4 = (short)137;
unsigned short var_7 = (unsigned short)8396;
int var_8 = 370782193;
long long int var_9 = 8002960665829206455LL;
int var_11 = 1521198866;
short var_13 = (short)-28068;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -2046987212;
unsigned short var_16 = (unsigned short)6779;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

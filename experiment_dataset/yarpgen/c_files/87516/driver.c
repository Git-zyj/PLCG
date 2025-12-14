#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2204925730602547536LL;
int var_1 = 169997363;
short var_2 = (short)27377;
long long int var_3 = -8335864641558026634LL;
int var_4 = -98011128;
long long int var_5 = -4969293171923148750LL;
unsigned char var_7 = (unsigned char)12;
unsigned long long int var_8 = 10991577795100670828ULL;
unsigned long long int var_9 = 2797554932893697545ULL;
unsigned char var_11 = (unsigned char)142;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_14 = -6468175678279422703LL;
signed char var_15 = (signed char)-53;
unsigned char var_16 = (unsigned char)123;
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

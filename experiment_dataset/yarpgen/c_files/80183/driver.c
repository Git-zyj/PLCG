#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 14387731497171776215ULL;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)30;
int var_7 = 325242124;
unsigned long long int var_9 = 4673839477241920783ULL;
signed char var_11 = (signed char)-110;
long long int var_12 = -863330400981462934LL;
int zero = 0;
unsigned long long int var_13 = 6074060582444731366ULL;
unsigned long long int var_14 = 7506990399986045613ULL;
unsigned short var_15 = (unsigned short)10198;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

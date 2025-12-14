#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5451748153612303848LL;
unsigned short var_2 = (unsigned short)44373;
unsigned short var_3 = (unsigned short)54418;
unsigned char var_4 = (unsigned char)59;
int var_6 = -1352084452;
short var_7 = (short)-31850;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 17940138422613661479ULL;
unsigned short var_11 = (unsigned short)51905;
int var_12 = 946438211;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

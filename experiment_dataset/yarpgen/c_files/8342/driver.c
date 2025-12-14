#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25849;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 1189183121U;
_Bool var_3 = (_Bool)1;
long long int var_4 = -5294181640206708174LL;
long long int var_7 = 1519941453010859021LL;
unsigned char var_10 = (unsigned char)208;
int var_11 = 1946929203;
int zero = 0;
long long int var_12 = 8738641676513390218LL;
int var_13 = 223851343;
long long int var_14 = -4360009236208496336LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

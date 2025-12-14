#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)19;
unsigned long long int var_7 = 2132442637949404278ULL;
unsigned int var_8 = 3295235722U;
long long int var_9 = -2656712911641233294LL;
unsigned char var_10 = (unsigned char)121;
unsigned int var_11 = 3781382395U;
long long int var_13 = -9220956200309719842LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_20 = 8552967163046253627LL;
signed char var_21 = (signed char)-2;
int var_22 = -1710212110;
short var_23 = (short)10576;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

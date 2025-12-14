#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-76;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)0;
long long int var_13 = -6721360221598813743LL;
short var_15 = (short)-23142;
int zero = 0;
unsigned long long int var_17 = 3685159638690065095ULL;
long long int var_18 = 1921695281966416612LL;
unsigned long long int var_19 = 10842347298046933535ULL;
unsigned char var_20 = (unsigned char)109;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

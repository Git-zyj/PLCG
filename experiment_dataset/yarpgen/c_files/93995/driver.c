#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13996917366058721821ULL;
unsigned char var_5 = (unsigned char)144;
unsigned char var_6 = (unsigned char)49;
unsigned long long int var_8 = 11651864790247424676ULL;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)183;
unsigned int var_13 = 3115274600U;
long long int var_16 = 1540823703615923241LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 12812032322401592511ULL;
unsigned long long int var_21 = 5975596700029809612ULL;
void init() {
}

void checksum() {
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

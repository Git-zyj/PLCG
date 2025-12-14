#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60827;
unsigned long long int var_2 = 2499373099099175847ULL;
long long int var_4 = -125366565336578750LL;
signed char var_6 = (signed char)-29;
unsigned char var_7 = (unsigned char)186;
unsigned char var_10 = (unsigned char)7;
short var_12 = (short)18017;
unsigned long long int var_15 = 10812919209462270866ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 419717170;
signed char var_19 = (signed char)-51;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

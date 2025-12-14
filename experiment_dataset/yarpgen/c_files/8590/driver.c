#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7443566234852246923ULL;
long long int var_1 = 6159155453606702602LL;
signed char var_2 = (signed char)-71;
unsigned long long int var_3 = 1784183763678589826ULL;
long long int var_5 = 8329903124072512497LL;
signed char var_6 = (signed char)-43;
unsigned char var_7 = (unsigned char)86;
unsigned int var_9 = 2274071910U;
int var_10 = 909304926;
short var_13 = (short)-23743;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)15101;
void init() {
}

void checksum() {
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

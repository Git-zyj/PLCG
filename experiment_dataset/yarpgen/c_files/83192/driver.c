#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)82;
int var_4 = 1752402709;
unsigned short var_5 = (unsigned short)723;
long long int var_6 = -959175419603033884LL;
unsigned int var_10 = 966481566U;
long long int var_11 = -2958947805054226661LL;
short var_12 = (short)-27470;
unsigned long long int var_13 = 11830244442893384810ULL;
unsigned int var_14 = 2730038438U;
signed char var_16 = (signed char)-24;
int zero = 0;
short var_17 = (short)-22467;
int var_18 = -527046158;
long long int var_19 = -3122996206472577195LL;
unsigned long long int var_20 = 5053451536972928650ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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

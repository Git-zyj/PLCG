#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)28;
unsigned char var_3 = (unsigned char)222;
_Bool var_4 = (_Bool)1;
int var_6 = 437218867;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-82;
int var_11 = 91279950;
unsigned char var_14 = (unsigned char)99;
int zero = 0;
signed char var_15 = (signed char)-75;
unsigned char var_16 = (unsigned char)217;
int var_17 = -1266173216;
signed char var_18 = (signed char)-73;
signed char var_19 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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

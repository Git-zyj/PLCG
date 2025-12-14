#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60174;
unsigned short var_1 = (unsigned short)25770;
long long int var_3 = 2820474117544309347LL;
long long int var_4 = 7934835570502548943LL;
long long int var_7 = 1699079850745268446LL;
int var_8 = 471626104;
signed char var_9 = (signed char)12;
signed char var_10 = (signed char)-32;
unsigned long long int var_11 = 10391501830778104014ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)9828;
unsigned long long int var_14 = 15134922373335790528ULL;
short var_15 = (short)-858;
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

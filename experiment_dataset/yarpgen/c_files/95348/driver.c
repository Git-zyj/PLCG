#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4625593776670686717LL;
long long int var_1 = -2520729462724682777LL;
unsigned int var_2 = 407677817U;
unsigned short var_3 = (unsigned short)1356;
unsigned short var_4 = (unsigned short)24253;
unsigned long long int var_5 = 11736385911366839947ULL;
unsigned char var_7 = (unsigned char)76;
unsigned long long int var_8 = 14017566742960828591ULL;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)84;
signed char var_11 = (signed char)54;
int zero = 0;
signed char var_13 = (signed char)-16;
unsigned long long int var_14 = 6772767041962357952ULL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

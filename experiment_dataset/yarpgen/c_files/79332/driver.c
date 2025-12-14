#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5903144063856122384LL;
unsigned int var_2 = 1883001812U;
unsigned long long int var_3 = 6716861198851343957ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)89;
int var_7 = -301862254;
unsigned long long int var_8 = 12556193195910822732ULL;
unsigned short var_9 = (unsigned short)54657;
unsigned int var_10 = 3891897195U;
int zero = 0;
unsigned int var_12 = 2736937709U;
signed char var_13 = (signed char)-43;
signed char var_14 = (signed char)77;
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

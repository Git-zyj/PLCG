#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3322753629360880801ULL;
unsigned long long int var_1 = 13945424342281915818ULL;
unsigned long long int var_2 = 18039194022463470860ULL;
long long int var_3 = 6496430873754397777LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 791155296861959766ULL;
unsigned char var_10 = (unsigned char)111;
int zero = 0;
unsigned int var_12 = 4105990224U;
signed char var_13 = (signed char)-17;
short var_14 = (short)-23357;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 820951898U;
long long int var_1 = 6082763816739285614LL;
unsigned long long int var_3 = 8696554719380701460ULL;
int var_4 = 269425168;
long long int var_5 = 753628717360895710LL;
unsigned long long int var_7 = 5544976536368079423ULL;
unsigned char var_9 = (unsigned char)1;
int var_10 = -1141600990;
long long int var_12 = -2155562384215327270LL;
unsigned long long int var_13 = 11216983440956428643ULL;
unsigned int var_14 = 3607295575U;
long long int var_15 = 8790910990053056213LL;
int zero = 0;
long long int var_18 = 8873628610150751393LL;
unsigned char var_19 = (unsigned char)17;
unsigned long long int var_20 = 4021035434461729363ULL;
unsigned char var_21 = (unsigned char)84;
void init() {
}

void checksum() {
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

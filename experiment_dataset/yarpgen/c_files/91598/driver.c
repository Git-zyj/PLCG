#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4281989301506660241LL;
unsigned char var_2 = (unsigned char)239;
long long int var_6 = -2495939902605763044LL;
unsigned short var_8 = (unsigned short)63359;
int var_9 = -1850771135;
short var_11 = (short)16412;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)23708;
unsigned int var_15 = 2972792069U;
int var_16 = 1407353238;
long long int var_17 = -3638986883889135435LL;
int zero = 0;
short var_18 = (short)-14239;
unsigned long long int var_19 = 3510423632056527844ULL;
signed char var_20 = (signed char)16;
_Bool var_21 = (_Bool)1;
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

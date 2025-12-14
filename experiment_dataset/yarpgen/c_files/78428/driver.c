#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56285;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)126;
unsigned short var_3 = (unsigned short)6063;
unsigned short var_4 = (unsigned short)25095;
unsigned char var_5 = (unsigned char)206;
signed char var_6 = (signed char)49;
unsigned char var_7 = (unsigned char)95;
signed char var_8 = (signed char)-107;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 11496815769623116018ULL;
signed char var_11 = (signed char)-38;
unsigned short var_12 = (unsigned short)10232;
unsigned short var_13 = (unsigned short)26750;
int var_14 = 430494473;
unsigned long long int var_15 = 2976628086557993682ULL;
int var_17 = -1204299619;
unsigned long long int var_19 = 1488593256218667881ULL;
int zero = 0;
long long int var_20 = 5911150664039860061LL;
long long int var_21 = 7482058280680566692LL;
signed char var_22 = (signed char)113;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

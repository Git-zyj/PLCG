#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-125;
unsigned long long int var_1 = 5138409322397695197ULL;
_Bool var_3 = (_Bool)0;
long long int var_4 = -4184556274425164427LL;
unsigned long long int var_5 = 6033952733804190154ULL;
unsigned long long int var_8 = 1340947269383418623ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-99;
short var_11 = (short)28935;
unsigned long long int var_12 = 8620496284159605208ULL;
unsigned char var_13 = (unsigned char)225;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

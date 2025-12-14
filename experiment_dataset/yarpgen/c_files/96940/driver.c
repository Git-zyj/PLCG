#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30985;
signed char var_1 = (signed char)58;
unsigned long long int var_5 = 8446632053593839991ULL;
unsigned int var_6 = 4208434041U;
unsigned long long int var_10 = 14247410454718265376ULL;
unsigned long long int var_15 = 18148937314435718844ULL;
short var_16 = (short)-21479;
int zero = 0;
unsigned short var_18 = (unsigned short)47565;
unsigned long long int var_19 = 8336163037856490288ULL;
long long int var_20 = -2849374281563375265LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)85;
short var_2 = (short)-10273;
unsigned long long int var_4 = 7988373917336775336ULL;
short var_5 = (short)-3101;
long long int var_7 = -4376596685848682567LL;
_Bool var_8 = (_Bool)1;
short var_10 = (short)6153;
unsigned char var_11 = (unsigned char)52;
signed char var_13 = (signed char)19;
long long int var_15 = 6672015088135732930LL;
int zero = 0;
short var_19 = (short)-28543;
unsigned short var_20 = (unsigned short)27604;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-30131;
signed char var_23 = (signed char)79;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

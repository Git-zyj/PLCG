#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)32;
unsigned int var_1 = 3629511352U;
unsigned char var_2 = (unsigned char)81;
unsigned char var_3 = (unsigned char)219;
long long int var_4 = -4934488097729463824LL;
unsigned short var_6 = (unsigned short)56574;
short var_9 = (short)-12605;
signed char var_10 = (signed char)-40;
short var_11 = (short)16642;
signed char var_12 = (signed char)-88;
signed char var_13 = (signed char)-30;
unsigned char var_14 = (unsigned char)29;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_16 = (short)-28301;
long long int var_17 = 8478162726939171137LL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

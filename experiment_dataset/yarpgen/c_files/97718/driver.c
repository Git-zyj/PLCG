#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)46;
unsigned short var_2 = (unsigned short)25204;
short var_3 = (short)4101;
unsigned int var_7 = 2697436119U;
long long int var_15 = 8581501007124936378LL;
unsigned short var_18 = (unsigned short)56021;
int zero = 0;
short var_20 = (short)-22794;
_Bool var_21 = (_Bool)0;
int var_22 = -1421742040;
short var_23 = (short)-2524;
void init() {
}

void checksum() {
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

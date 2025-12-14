#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3279979411U;
unsigned long long int var_1 = 16593929234696959949ULL;
unsigned char var_4 = (unsigned char)180;
signed char var_5 = (signed char)-39;
unsigned short var_6 = (unsigned short)15512;
unsigned char var_7 = (unsigned char)238;
signed char var_10 = (signed char)-73;
unsigned short var_11 = (unsigned short)16094;
int zero = 0;
signed char var_13 = (signed char)109;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)22399;
signed char var_16 = (signed char)-53;
unsigned long long int var_17 = 17444313692976844478ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

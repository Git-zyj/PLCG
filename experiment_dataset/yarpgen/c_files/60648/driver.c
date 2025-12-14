#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1192578972U;
long long int var_3 = 1278857458095978957LL;
signed char var_4 = (signed char)81;
int var_5 = -469060870;
unsigned int var_6 = 991481339U;
unsigned char var_8 = (unsigned char)82;
unsigned int var_9 = 97497222U;
int var_10 = -216195134;
unsigned char var_11 = (unsigned char)16;
short var_12 = (short)302;
int zero = 0;
int var_14 = 860514794;
unsigned int var_15 = 1631337440U;
unsigned char var_16 = (unsigned char)202;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)33799;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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

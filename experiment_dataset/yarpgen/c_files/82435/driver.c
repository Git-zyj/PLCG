#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -333681929;
unsigned char var_1 = (unsigned char)78;
int var_2 = -478906127;
int var_3 = -1759547588;
signed char var_4 = (signed char)-117;
unsigned short var_6 = (unsigned short)16260;
int var_8 = -1171844906;
unsigned char var_10 = (unsigned char)16;
unsigned short var_11 = (unsigned short)57554;
unsigned short var_12 = (unsigned short)35100;
unsigned char var_13 = (unsigned char)121;
unsigned char var_14 = (unsigned char)192;
signed char var_15 = (signed char)111;
signed char var_16 = (signed char)-45;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_18 = 1492952503;
int var_19 = 379684339;
unsigned short var_20 = (unsigned short)22833;
unsigned short var_21 = (unsigned short)53654;
signed char var_22 = (signed char)-67;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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

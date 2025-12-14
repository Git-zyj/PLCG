#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)7;
signed char var_1 = (signed char)-14;
unsigned int var_2 = 3888769325U;
int var_3 = -1237432880;
long long int var_4 = -1824638399365603482LL;
int var_5 = -2089668582;
long long int var_6 = 5075290555486491897LL;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)26;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_12 = (short)-1490;
unsigned char var_13 = (unsigned char)164;
unsigned short var_14 = (unsigned short)62353;
unsigned char var_15 = (unsigned char)181;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

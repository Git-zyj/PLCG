#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1648571451;
signed char var_4 = (signed char)77;
unsigned char var_6 = (unsigned char)148;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)19823;
unsigned short var_13 = (unsigned short)51771;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-106;
int zero = 0;
long long int var_20 = -533156840592680124LL;
int var_21 = 366128224;
unsigned char var_22 = (unsigned char)199;
unsigned char var_23 = (unsigned char)63;
unsigned short var_24 = (unsigned short)61725;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

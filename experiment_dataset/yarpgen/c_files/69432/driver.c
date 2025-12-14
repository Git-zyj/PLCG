#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5719;
signed char var_2 = (signed char)2;
long long int var_3 = 2097967406668209067LL;
signed char var_5 = (signed char)68;
unsigned long long int var_6 = 16556136185781529876ULL;
int var_8 = 594953465;
int var_9 = -208587590;
int zero = 0;
unsigned char var_10 = (unsigned char)219;
unsigned long long int var_11 = 576836518009062718ULL;
unsigned char var_12 = (unsigned char)171;
_Bool var_13 = (_Bool)1;
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

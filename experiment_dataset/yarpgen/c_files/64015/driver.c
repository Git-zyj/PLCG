#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)22;
long long int var_1 = 5702710949826309149LL;
signed char var_2 = (signed char)-12;
signed char var_3 = (signed char)-8;
_Bool var_5 = (_Bool)0;
signed char var_9 = (signed char)111;
long long int var_13 = 6726063643016956001LL;
unsigned char var_14 = (unsigned char)129;
int zero = 0;
int var_16 = 1820648757;
unsigned char var_17 = (unsigned char)23;
unsigned short var_18 = (unsigned short)1956;
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

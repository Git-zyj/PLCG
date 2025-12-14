#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2888;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)33;
signed char var_5 = (signed char)-35;
signed char var_9 = (signed char)-62;
unsigned char var_11 = (unsigned char)109;
_Bool var_14 = (_Bool)0;
unsigned char var_17 = (unsigned char)225;
int zero = 0;
unsigned int var_18 = 1884161085U;
unsigned char var_19 = (unsigned char)155;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

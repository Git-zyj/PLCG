#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8971461701912781634LL;
int var_4 = 2023228504;
short var_6 = (short)-6954;
unsigned int var_7 = 2899800132U;
unsigned short var_9 = (unsigned short)31236;
unsigned short var_11 = (unsigned short)57568;
unsigned short var_12 = (unsigned short)34334;
unsigned char var_13 = (unsigned char)156;
long long int var_14 = 3369826320580265141LL;
signed char var_18 = (signed char)83;
int zero = 0;
long long int var_20 = -8108243242777220564LL;
short var_21 = (short)23907;
unsigned short var_22 = (unsigned short)59281;
void init() {
}

void checksum() {
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

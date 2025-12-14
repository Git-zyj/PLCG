#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -85609888;
unsigned short var_5 = (unsigned short)19904;
unsigned short var_6 = (unsigned short)25293;
unsigned short var_7 = (unsigned short)43867;
int var_8 = -1312502646;
int var_9 = 898221133;
unsigned short var_10 = (unsigned short)16818;
unsigned short var_15 = (unsigned short)1629;
int var_16 = 1897307979;
int zero = 0;
unsigned short var_17 = (unsigned short)42538;
int var_18 = 484165922;
int var_19 = -809462947;
int var_20 = 352436258;
unsigned short var_21 = (unsigned short)23406;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

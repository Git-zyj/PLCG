#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19439;
unsigned short var_4 = (unsigned short)41683;
signed char var_6 = (signed char)50;
int var_9 = -275869272;
int var_11 = -612175202;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)18909;
int zero = 0;
unsigned short var_20 = (unsigned short)1297;
short var_21 = (short)-761;
void init() {
}

void checksum() {
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

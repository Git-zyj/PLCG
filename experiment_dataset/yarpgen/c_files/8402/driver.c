#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1958352704;
int var_1 = 1303713517;
int var_2 = -527698604;
short var_3 = (short)27726;
unsigned char var_4 = (unsigned char)166;
signed char var_6 = (signed char)-12;
unsigned int var_7 = 3237281493U;
int var_8 = -1136363015;
unsigned char var_9 = (unsigned char)222;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)199;
signed char var_12 = (signed char)-38;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

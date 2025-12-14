#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 490772282812433100LL;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 1278608014U;
long long int var_5 = 2914790383553478309LL;
unsigned short var_6 = (unsigned short)17752;
short var_9 = (short)13908;
short var_11 = (short)-11933;
int zero = 0;
unsigned long long int var_12 = 3348018487148504683ULL;
unsigned char var_13 = (unsigned char)255;
unsigned long long int var_14 = 15835191105644636179ULL;
signed char var_15 = (signed char)-31;
signed char var_16 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_6 = (_Bool)1;
signed char var_9 = (signed char)-27;
signed char var_10 = (signed char)-82;
unsigned short var_11 = (unsigned short)45071;
int var_12 = -1274662818;
signed char var_13 = (signed char)-39;
unsigned short var_14 = (unsigned short)4985;
signed char var_18 = (signed char)-111;
int zero = 0;
unsigned short var_20 = (unsigned short)11058;
short var_21 = (short)3905;
long long int var_22 = -6790078236735345965LL;
signed char var_23 = (signed char)-51;
unsigned char var_24 = (unsigned char)221;
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

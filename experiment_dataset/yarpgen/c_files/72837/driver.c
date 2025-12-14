#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-52;
short var_1 = (short)-15155;
unsigned long long int var_4 = 511362533093404448ULL;
unsigned long long int var_6 = 5512075253345097815ULL;
short var_10 = (short)-10676;
unsigned int var_13 = 2912166713U;
short var_16 = (short)20123;
int zero = 0;
signed char var_18 = (signed char)52;
short var_19 = (short)-29584;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)250;
void init() {
}

void checksum() {
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

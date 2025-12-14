#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15834805742987339161ULL;
unsigned char var_2 = (unsigned char)72;
int var_7 = 698655741;
signed char var_12 = (signed char)46;
unsigned char var_14 = (unsigned char)100;
signed char var_16 = (signed char)-82;
int zero = 0;
short var_20 = (short)3949;
signed char var_21 = (signed char)116;
unsigned long long int var_22 = 18153347264891037598ULL;
unsigned char var_23 = (unsigned char)223;
_Bool var_24 = (_Bool)0;
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

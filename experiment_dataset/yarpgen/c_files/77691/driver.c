#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40419;
unsigned short var_1 = (unsigned short)42209;
_Bool var_2 = (_Bool)0;
unsigned int var_12 = 2998556516U;
unsigned char var_13 = (unsigned char)108;
int zero = 0;
unsigned char var_14 = (unsigned char)180;
unsigned long long int var_15 = 7198906314651772464ULL;
unsigned char var_16 = (unsigned char)63;
void init() {
}

void checksum() {
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

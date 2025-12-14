#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)47;
short var_7 = (short)7657;
unsigned short var_9 = (unsigned short)50699;
signed char var_13 = (signed char)-77;
_Bool var_16 = (_Bool)1;
signed char var_19 = (signed char)44;
int zero = 0;
unsigned char var_20 = (unsigned char)39;
short var_21 = (short)2896;
short var_22 = (short)14348;
short var_23 = (short)9772;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

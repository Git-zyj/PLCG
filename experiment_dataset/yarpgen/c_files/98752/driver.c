#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3993833432U;
long long int var_5 = -2689558526590561410LL;
unsigned char var_6 = (unsigned char)202;
short var_7 = (short)-7006;
unsigned short var_9 = (unsigned short)41704;
int var_10 = 877185712;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 2366964240342062133LL;
signed char var_14 = (signed char)-31;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

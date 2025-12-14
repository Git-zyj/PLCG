#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23984;
signed char var_3 = (signed char)-98;
int var_9 = 213603383;
short var_11 = (short)9506;
int var_15 = 630197838;
unsigned int var_16 = 2985971255U;
signed char var_17 = (signed char)96;
int zero = 0;
unsigned long long int var_18 = 1256788238125797723ULL;
signed char var_19 = (signed char)-39;
unsigned short var_20 = (unsigned short)22572;
unsigned short var_21 = (unsigned short)18774;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-26706;
_Bool var_3 = (_Bool)1;
short var_5 = (short)-25746;
short var_9 = (short)-6003;
int var_15 = 872435891;
unsigned int var_16 = 859308654U;
int zero = 0;
signed char var_19 = (signed char)-44;
unsigned char var_20 = (unsigned char)80;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

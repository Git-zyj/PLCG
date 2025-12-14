#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16845064473319216566ULL;
unsigned int var_1 = 1676513188U;
long long int var_5 = 7942938579769303149LL;
unsigned int var_9 = 830483792U;
unsigned long long int var_10 = 5935732759351015478ULL;
_Bool var_12 = (_Bool)0;
unsigned char var_15 = (unsigned char)129;
int zero = 0;
int var_16 = -546414962;
long long int var_17 = -4224508298188143820LL;
signed char var_18 = (signed char)124;
unsigned short var_19 = (unsigned short)45564;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

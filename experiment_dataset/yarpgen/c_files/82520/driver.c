#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1463979823;
long long int var_8 = -8807503485026772131LL;
unsigned short var_9 = (unsigned short)9424;
unsigned short var_11 = (unsigned short)8944;
int zero = 0;
short var_19 = (short)11701;
unsigned short var_20 = (unsigned short)16237;
unsigned int var_21 = 995480009U;
long long int var_22 = 9006840225057173330LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

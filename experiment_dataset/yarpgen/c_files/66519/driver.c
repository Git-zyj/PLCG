#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -151633377;
unsigned int var_2 = 678405204U;
long long int var_3 = -5128478835979668313LL;
unsigned char var_5 = (unsigned char)35;
unsigned long long int var_8 = 400809305395654282ULL;
unsigned int var_9 = 4204680322U;
unsigned char var_17 = (unsigned char)178;
unsigned short var_18 = (unsigned short)27910;
signed char var_19 = (signed char)85;
int zero = 0;
unsigned int var_20 = 640122025U;
unsigned long long int var_21 = 4388768371366313476ULL;
short var_22 = (short)20877;
long long int var_23 = -804181116276081237LL;
int var_24 = -937463232;
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

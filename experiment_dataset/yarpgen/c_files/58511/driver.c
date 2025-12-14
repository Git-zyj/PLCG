#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1463813996;
unsigned char var_3 = (unsigned char)156;
unsigned char var_4 = (unsigned char)108;
short var_5 = (short)10116;
long long int var_8 = -2146694959255927143LL;
unsigned short var_9 = (unsigned short)43687;
unsigned char var_12 = (unsigned char)20;
int var_13 = 1814280955;
int zero = 0;
unsigned short var_14 = (unsigned short)54737;
unsigned int var_15 = 54050259U;
unsigned long long int var_16 = 7116710920087431042ULL;
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

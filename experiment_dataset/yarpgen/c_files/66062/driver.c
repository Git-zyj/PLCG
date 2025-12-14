#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-85;
short var_3 = (short)-28719;
unsigned char var_4 = (unsigned char)84;
signed char var_6 = (signed char)-67;
unsigned char var_9 = (unsigned char)164;
int zero = 0;
unsigned long long int var_16 = 17438307733354185390ULL;
unsigned char var_17 = (unsigned char)214;
signed char var_18 = (signed char)125;
unsigned long long int var_19 = 16367361001671015645ULL;
signed char var_20 = (signed char)67;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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

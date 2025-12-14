#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16323893406971559795ULL;
unsigned char var_6 = (unsigned char)104;
signed char var_9 = (signed char)89;
unsigned int var_14 = 1523246132U;
unsigned int var_15 = 3674976698U;
int zero = 0;
short var_17 = (short)32729;
unsigned short var_18 = (unsigned short)60060;
unsigned short var_19 = (unsigned short)13046;
void init() {
}

void checksum() {
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

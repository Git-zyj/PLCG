#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7081;
unsigned int var_3 = 2043324345U;
unsigned char var_4 = (unsigned char)118;
unsigned long long int var_5 = 14937913058126551649ULL;
signed char var_6 = (signed char)-35;
unsigned int var_7 = 3294304178U;
unsigned long long int var_8 = 794577971664466119ULL;
signed char var_9 = (signed char)-52;
int zero = 0;
long long int var_12 = 1432447157484794307LL;
int var_13 = -1805665296;
short var_14 = (short)29394;
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

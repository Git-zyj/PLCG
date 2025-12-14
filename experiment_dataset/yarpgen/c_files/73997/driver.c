#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14972;
long long int var_4 = -8045765854483932307LL;
unsigned int var_6 = 2082513781U;
signed char var_8 = (signed char)-90;
signed char var_9 = (signed char)112;
int zero = 0;
long long int var_11 = -3178201437155964374LL;
signed char var_12 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

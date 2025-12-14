#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31517;
long long int var_2 = -2229371818504800863LL;
unsigned char var_3 = (unsigned char)6;
unsigned long long int var_4 = 15984921968510730659ULL;
signed char var_6 = (signed char)25;
long long int var_9 = 7180237432217076001LL;
signed char var_10 = (signed char)-74;
long long int var_12 = -1337012374071197237LL;
int zero = 0;
unsigned char var_13 = (unsigned char)152;
unsigned int var_14 = 2391079412U;
void init() {
}

void checksum() {
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

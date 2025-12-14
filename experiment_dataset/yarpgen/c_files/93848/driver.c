#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)217;
unsigned int var_2 = 2932951203U;
signed char var_5 = (signed char)72;
signed char var_6 = (signed char)27;
unsigned char var_9 = (unsigned char)127;
int var_12 = 73418373;
int zero = 0;
int var_13 = -934489301;
unsigned char var_14 = (unsigned char)180;
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

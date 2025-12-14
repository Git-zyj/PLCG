#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4265634216U;
short var_8 = (short)-14334;
unsigned int var_9 = 2896073162U;
short var_10 = (short)-12635;
short var_11 = (short)27514;
short var_12 = (short)14265;
int zero = 0;
unsigned int var_13 = 1946208919U;
unsigned int var_14 = 3528431349U;
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

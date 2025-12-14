#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 533176762;
int var_2 = 784713010;
int var_9 = 1885448591;
int var_12 = 1071978895;
int var_13 = -164390876;
unsigned short var_15 = (unsigned short)5439;
int zero = 0;
int var_19 = -2024931765;
unsigned short var_20 = (unsigned short)59507;
void init() {
}

void checksum() {
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

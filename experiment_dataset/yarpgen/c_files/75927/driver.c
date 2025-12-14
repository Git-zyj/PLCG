#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57438;
long long int var_2 = -5612299430363084652LL;
unsigned short var_3 = (unsigned short)29500;
int var_6 = -1380986751;
unsigned long long int var_7 = 15898927953584189085ULL;
long long int var_9 = 4911690342307489206LL;
int zero = 0;
signed char var_10 = (signed char)-1;
long long int var_11 = -4971450760474784575LL;
unsigned char var_12 = (unsigned char)111;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1897888383850363758ULL;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)29;
int var_5 = -609242319;
signed char var_6 = (signed char)-92;
unsigned long long int var_9 = 4745300473153122475ULL;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)2;
int zero = 0;
unsigned char var_12 = (unsigned char)9;
unsigned char var_13 = (unsigned char)106;
unsigned long long int var_14 = 5413033628117289306ULL;
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

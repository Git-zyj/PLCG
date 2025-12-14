#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)46;
unsigned char var_4 = (unsigned char)213;
unsigned char var_5 = (unsigned char)37;
long long int var_6 = -3090474411915395832LL;
long long int var_9 = 7960391147840278427LL;
long long int var_11 = 7881948999125052564LL;
int zero = 0;
long long int var_13 = -2584901834982459290LL;
long long int var_14 = -665040891775775972LL;
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

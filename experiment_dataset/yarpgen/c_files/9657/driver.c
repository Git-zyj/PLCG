#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 952467110489958084LL;
unsigned short var_4 = (unsigned short)50934;
unsigned int var_9 = 436372255U;
unsigned long long int var_13 = 6225028453523386951ULL;
short var_14 = (short)26516;
int var_16 = -1357796099;
int zero = 0;
long long int var_19 = 6997990531263863691LL;
unsigned int var_20 = 849871532U;
int var_21 = 717736757;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

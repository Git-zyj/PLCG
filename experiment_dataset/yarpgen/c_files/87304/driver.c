#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -243564778;
unsigned short var_3 = (unsigned short)34684;
int var_4 = -429766299;
long long int var_5 = 1944725002586604454LL;
unsigned long long int var_9 = 3005956976474519373ULL;
int var_10 = 1906017672;
int zero = 0;
int var_11 = -1911023120;
long long int var_12 = 7125785576238907970LL;
unsigned int var_13 = 1713690549U;
long long int var_14 = 1305369694033471678LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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

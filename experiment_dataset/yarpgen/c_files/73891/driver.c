#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4523312273650953861LL;
unsigned char var_5 = (unsigned char)215;
unsigned char var_7 = (unsigned char)186;
unsigned int var_9 = 1191866887U;
unsigned int var_11 = 3960154139U;
long long int var_14 = -928074501313626758LL;
int var_17 = -621057583;
int zero = 0;
unsigned char var_19 = (unsigned char)218;
int var_20 = 1923685873;
long long int var_21 = 7545671544301773590LL;
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

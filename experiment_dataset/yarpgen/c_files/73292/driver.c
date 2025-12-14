#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1918204267;
unsigned short var_2 = (unsigned short)59927;
unsigned int var_6 = 1335598702U;
signed char var_7 = (signed char)95;
unsigned char var_8 = (unsigned char)180;
signed char var_9 = (signed char)-33;
unsigned short var_10 = (unsigned short)38673;
unsigned long long int var_11 = 18230572266981678983ULL;
long long int var_12 = -4318338337094120228LL;
int zero = 0;
int var_13 = -1614737235;
signed char var_14 = (signed char)-7;
unsigned short var_15 = (unsigned short)22019;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

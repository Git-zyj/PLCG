#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7899542533860334958LL;
unsigned short var_7 = (unsigned short)35867;
unsigned short var_11 = (unsigned short)35887;
unsigned char var_12 = (unsigned char)181;
long long int var_13 = -4852824932182752705LL;
int zero = 0;
unsigned short var_15 = (unsigned short)155;
unsigned char var_16 = (unsigned char)7;
signed char var_17 = (signed char)-9;
long long int var_18 = -3106285961896274547LL;
int var_19 = 810467826;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

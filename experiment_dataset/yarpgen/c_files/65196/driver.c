#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 2002617973;
long long int var_6 = -2524141101855101292LL;
long long int var_7 = -8264614907013280775LL;
int var_9 = -2008047695;
int var_10 = 735196742;
int zero = 0;
int var_12 = 1019051612;
long long int var_13 = 4929180298183738806LL;
long long int var_14 = -254450492398574276LL;
int var_15 = 822371984;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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

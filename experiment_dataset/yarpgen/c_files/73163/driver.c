#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3212683424132800147LL;
long long int var_6 = -8542337120072032348LL;
long long int var_12 = 3065684103973162539LL;
unsigned long long int var_17 = 15199163869301715686ULL;
int zero = 0;
int var_20 = 1024645342;
long long int var_21 = -2911419839871997586LL;
unsigned long long int var_22 = 3714097502694721941ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

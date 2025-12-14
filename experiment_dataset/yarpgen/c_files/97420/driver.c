#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6419802542107330978LL;
unsigned char var_4 = (unsigned char)186;
long long int var_6 = 5031937444360654397LL;
unsigned short var_9 = (unsigned short)60429;
int zero = 0;
long long int var_18 = 6565070556728630606LL;
signed char var_19 = (signed char)24;
void init() {
}

void checksum() {
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

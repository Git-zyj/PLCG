#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1886801813;
unsigned short var_9 = (unsigned short)64805;
int zero = 0;
signed char var_18 = (signed char)-77;
long long int var_19 = 5959676539302840542LL;
short var_20 = (short)18348;
unsigned int var_21 = 698031622U;
int var_22 = 626042811;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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

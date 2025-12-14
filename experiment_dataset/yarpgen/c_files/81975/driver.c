#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5390654225722020987ULL;
unsigned long long int var_10 = 9011487719870963904ULL;
short var_12 = (short)20945;
unsigned long long int var_13 = 7617363975242797595ULL;
int zero = 0;
unsigned long long int var_17 = 8272840446110172358ULL;
unsigned short var_18 = (unsigned short)47834;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

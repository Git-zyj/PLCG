#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1765848677671412235ULL;
int var_4 = 629561362;
long long int var_6 = -3015885386224992498LL;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 2055600267U;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 1237332099U;
unsigned long long int var_11 = 16560142046319218523ULL;
int zero = 0;
unsigned long long int var_14 = 5357460326262145559ULL;
unsigned long long int var_15 = 8843197587045929564ULL;
void init() {
}

void checksum() {
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

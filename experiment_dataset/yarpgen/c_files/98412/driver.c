#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5397372170362459719ULL;
unsigned int var_1 = 3104896574U;
unsigned long long int var_3 = 9237832197584234125ULL;
unsigned char var_5 = (unsigned char)62;
short var_8 = (short)27040;
short var_9 = (short)-32444;
int zero = 0;
unsigned int var_10 = 113157028U;
int var_11 = 556404756;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

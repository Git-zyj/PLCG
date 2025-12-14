#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)1816;
unsigned long long int var_5 = 12766240683332994017ULL;
unsigned short var_6 = (unsigned short)61996;
short var_8 = (short)22716;
unsigned short var_9 = (unsigned short)8228;
signed char var_12 = (signed char)63;
long long int var_13 = -1316848717237630653LL;
short var_14 = (short)-12145;
int zero = 0;
short var_16 = (short)5502;
int var_17 = -733756324;
unsigned short var_18 = (unsigned short)7429;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

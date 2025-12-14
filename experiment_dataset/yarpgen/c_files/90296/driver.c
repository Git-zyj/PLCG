#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10996;
unsigned int var_7 = 631216249U;
int var_9 = 258440131;
unsigned short var_11 = (unsigned short)45615;
signed char var_14 = (signed char)-33;
unsigned long long int var_15 = 3298689401759559758ULL;
int zero = 0;
unsigned long long int var_16 = 14312498743887277748ULL;
unsigned long long int var_17 = 2304326356826071310ULL;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)66;
unsigned int var_20 = 772045879U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

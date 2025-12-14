#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-89;
unsigned short var_2 = (unsigned short)19954;
signed char var_5 = (signed char)-74;
int var_9 = 1200023987;
long long int var_10 = -616986871375063188LL;
int var_11 = -1549750040;
unsigned int var_12 = 3206981685U;
int zero = 0;
unsigned char var_13 = (unsigned char)142;
unsigned long long int var_14 = 3326349601918813116ULL;
long long int var_15 = 5599533935385306337LL;
unsigned long long int var_16 = 8160156246161381036ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20962;
unsigned int var_1 = 2800770474U;
_Bool var_4 = (_Bool)0;
unsigned long long int var_9 = 8901748184686341378ULL;
short var_10 = (short)6999;
unsigned long long int var_11 = 14906636540130062305ULL;
unsigned long long int var_12 = 1274215748604011618ULL;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 644026667U;
unsigned short var_15 = (unsigned short)40232;
int zero = 0;
signed char var_17 = (signed char)2;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 12879770489734408342ULL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 942241081;
_Bool var_9 = (_Bool)0;
unsigned short var_15 = (unsigned short)19651;
signed char var_16 = (signed char)-49;
int zero = 0;
unsigned long long int var_20 = 14230491612757016759ULL;
signed char var_21 = (signed char)-85;
int var_22 = 1847555955;
unsigned char var_23 = (unsigned char)183;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

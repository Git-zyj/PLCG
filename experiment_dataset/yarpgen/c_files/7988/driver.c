#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19681;
unsigned short var_1 = (unsigned short)56489;
_Bool var_2 = (_Bool)1;
unsigned long long int var_7 = 5864435047355635263ULL;
signed char var_8 = (signed char)-51;
int var_13 = 665648060;
unsigned long long int var_14 = 10329323725143627581ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 4374908907024906018ULL;
void init() {
}

void checksum() {
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

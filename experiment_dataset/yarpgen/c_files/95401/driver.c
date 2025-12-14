#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8489043257380724257ULL;
signed char var_1 = (signed char)-18;
int var_9 = -146521493;
unsigned char var_13 = (unsigned char)64;
unsigned short var_17 = (unsigned short)833;
int zero = 0;
unsigned char var_19 = (unsigned char)113;
unsigned long long int var_20 = 8677886247764960419ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

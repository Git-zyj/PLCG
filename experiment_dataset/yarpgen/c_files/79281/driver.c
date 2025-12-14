#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)94;
unsigned long long int var_7 = 5880956237226677083ULL;
short var_8 = (short)-17238;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 2116159599795214063ULL;
int var_17 = 353513384;
long long int var_18 = 5990012445904729259LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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

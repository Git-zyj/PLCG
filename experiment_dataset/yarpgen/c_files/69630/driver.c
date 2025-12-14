#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4785350235391177503ULL;
unsigned long long int var_6 = 15266177560850360816ULL;
unsigned char var_8 = (unsigned char)214;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_12 = (short)-20945;
unsigned long long int var_13 = 16750483072722306193ULL;
long long int var_14 = -3785218577379097990LL;
short var_15 = (short)22010;
unsigned short var_16 = (unsigned short)19229;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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

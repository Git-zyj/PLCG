#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12137496927008529105ULL;
long long int var_3 = 6137374812862067223LL;
short var_4 = (short)-27018;
unsigned int var_6 = 481611093U;
_Bool var_8 = (_Bool)0;
long long int var_9 = 6018977613641412989LL;
int zero = 0;
unsigned int var_10 = 1223836399U;
unsigned char var_11 = (unsigned char)19;
long long int var_12 = 6006852010350364818LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

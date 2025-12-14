#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3117975522313529147ULL;
unsigned long long int var_2 = 17387393460552044387ULL;
int var_4 = -67427937;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 10926895436566833988ULL;
unsigned short var_16 = (unsigned short)35259;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)17815;
void init() {
}

void checksum() {
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

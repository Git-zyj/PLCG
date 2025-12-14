#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)100;
long long int var_2 = 5861033985571314696LL;
unsigned long long int var_3 = 5791081728018721448ULL;
short var_4 = (short)25248;
unsigned short var_6 = (unsigned short)32148;
unsigned long long int var_7 = 4507234252686087152ULL;
unsigned long long int var_9 = 4590174203878821968ULL;
unsigned short var_11 = (unsigned short)62448;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)154;
void init() {
}

void checksum() {
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

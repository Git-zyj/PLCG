#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)21;
unsigned long long int var_1 = 17435186064940928741ULL;
unsigned short var_3 = (unsigned short)1309;
unsigned long long int var_5 = 13471611074338623764ULL;
unsigned long long int var_6 = 5058456397319514558ULL;
unsigned short var_7 = (unsigned short)8908;
int var_10 = -1650085077;
unsigned short var_11 = (unsigned short)17560;
int var_12 = -258314990;
int zero = 0;
unsigned char var_13 = (unsigned char)146;
unsigned long long int var_14 = 7719227960926285064ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

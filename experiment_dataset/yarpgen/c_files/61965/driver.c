#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16134600951175782282ULL;
unsigned long long int var_2 = 2177934026416681915ULL;
unsigned char var_3 = (unsigned char)192;
unsigned char var_4 = (unsigned char)6;
unsigned int var_5 = 3709874925U;
unsigned long long int var_8 = 13640206438879337557ULL;
short var_9 = (short)25632;
unsigned char var_10 = (unsigned char)224;
int var_11 = -1417793727;
unsigned long long int var_12 = 8879011718208332215ULL;
int zero = 0;
signed char var_13 = (signed char)-37;
int var_14 = 1898604103;
unsigned char var_15 = (unsigned char)50;
unsigned long long int var_16 = 3302870898362630799ULL;
int var_17 = 1605573188;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

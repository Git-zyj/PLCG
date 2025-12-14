#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24164;
long long int var_1 = -1162860742279256041LL;
long long int var_3 = -7364374793432302528LL;
short var_4 = (short)7678;
long long int var_5 = -2522003419800739831LL;
unsigned short var_7 = (unsigned short)29882;
short var_8 = (short)-25666;
unsigned int var_9 = 4139794636U;
int zero = 0;
signed char var_10 = (signed char)-65;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-21675;
int var_13 = 811942173;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

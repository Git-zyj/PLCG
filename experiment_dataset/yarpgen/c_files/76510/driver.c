#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1107205616U;
short var_3 = (short)11897;
unsigned int var_4 = 954550698U;
unsigned int var_5 = 395779076U;
short var_6 = (short)-32196;
short var_7 = (short)15618;
long long int var_9 = 722031139511985610LL;
unsigned long long int var_11 = 5405982590757086182ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)132;
long long int var_14 = -3108855079726746730LL;
long long int var_15 = -7577320773504455976LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

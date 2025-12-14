#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6284288112207855179LL;
unsigned long long int var_3 = 15953790601058827336ULL;
unsigned char var_5 = (unsigned char)52;
short var_7 = (short)-5593;
unsigned char var_9 = (unsigned char)157;
short var_11 = (short)-2291;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 3534350944769108836ULL;
long long int var_17 = 4124547488714548170LL;
int var_18 = 1631851826;
void init() {
}

void checksum() {
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

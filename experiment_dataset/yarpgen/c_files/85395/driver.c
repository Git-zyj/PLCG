#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8352386563175498137LL;
unsigned long long int var_5 = 1757910880669070349ULL;
unsigned long long int var_6 = 13534731418233841735ULL;
unsigned char var_8 = (unsigned char)68;
unsigned long long int var_9 = 8289430609018430540ULL;
unsigned long long int var_12 = 14433770434588232174ULL;
int zero = 0;
unsigned long long int var_15 = 2073642216604695882ULL;
signed char var_16 = (signed char)-86;
unsigned short var_17 = (unsigned short)53992;
unsigned long long int var_18 = 11675817211077034423ULL;
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

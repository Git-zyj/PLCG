#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-109;
signed char var_2 = (signed char)65;
signed char var_6 = (signed char)-32;
long long int var_10 = 8439557714241801329LL;
int zero = 0;
unsigned char var_15 = (unsigned char)159;
unsigned long long int var_16 = 14118824399526150016ULL;
short var_17 = (short)-2221;
signed char var_18 = (signed char)-44;
short var_19 = (short)5514;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

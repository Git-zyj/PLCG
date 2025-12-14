#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)121;
unsigned int var_3 = 3809213245U;
long long int var_4 = 5886420692903111854LL;
signed char var_6 = (signed char)111;
int zero = 0;
long long int var_17 = 8168021960839409114LL;
unsigned short var_18 = (unsigned short)46345;
long long int var_19 = 709082887549893404LL;
void init() {
}

void checksum() {
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

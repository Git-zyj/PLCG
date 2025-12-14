#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16139412383947251899ULL;
unsigned int var_5 = 659751993U;
unsigned short var_6 = (unsigned short)22483;
unsigned short var_8 = (unsigned short)31223;
signed char var_9 = (signed char)108;
signed char var_10 = (signed char)67;
int zero = 0;
unsigned short var_13 = (unsigned short)11433;
unsigned int var_14 = 3087116622U;
unsigned int var_15 = 2993368273U;
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

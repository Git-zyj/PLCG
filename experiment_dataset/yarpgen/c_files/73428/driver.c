#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5828315892302686328ULL;
unsigned short var_5 = (unsigned short)9731;
signed char var_10 = (signed char)82;
unsigned long long int var_11 = 8980934503706362015ULL;
unsigned char var_12 = (unsigned char)72;
int zero = 0;
signed char var_18 = (signed char)-43;
unsigned short var_19 = (unsigned short)5254;
long long int var_20 = -6203389242576487775LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

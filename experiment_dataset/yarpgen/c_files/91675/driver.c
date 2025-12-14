#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7772820670934651445ULL;
unsigned short var_7 = (unsigned short)62392;
unsigned long long int var_9 = 8027132981346967419ULL;
unsigned short var_10 = (unsigned short)5611;
unsigned int var_11 = 2794212558U;
unsigned long long int var_15 = 1659238319239591306ULL;
unsigned long long int var_16 = 21018032466858186ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)64775;
unsigned int var_19 = 1528632023U;
unsigned short var_20 = (unsigned short)38324;
unsigned long long int var_21 = 15550417319188747997ULL;
signed char var_22 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

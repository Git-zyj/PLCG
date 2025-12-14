#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)203;
unsigned long long int var_3 = 16930049524614413737ULL;
unsigned long long int var_4 = 18015910822380393087ULL;
unsigned long long int var_5 = 2342904979496075788ULL;
signed char var_6 = (signed char)64;
long long int var_8 = -4345320304521604315LL;
long long int var_10 = 1935752511260736900LL;
int var_12 = 289689772;
int zero = 0;
int var_13 = 1623422169;
unsigned long long int var_14 = 11023882657531624043ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-27;
unsigned long long int var_1 = 10060074272093600446ULL;
int var_4 = 1908619751;
long long int var_5 = -3272114894834983537LL;
signed char var_8 = (signed char)75;
long long int var_12 = 4646294761052413826LL;
_Bool var_19 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)104;
long long int var_21 = 4212542942817350939LL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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

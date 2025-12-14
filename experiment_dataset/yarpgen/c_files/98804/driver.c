#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-43;
short var_3 = (short)-29197;
long long int var_5 = -846106186458778823LL;
unsigned long long int var_7 = 13390811060381162932ULL;
long long int var_9 = 8063109567051163510LL;
int zero = 0;
unsigned long long int var_10 = 10756078709286978848ULL;
long long int var_11 = 788480368913533506LL;
long long int var_12 = 5766326870122269207LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

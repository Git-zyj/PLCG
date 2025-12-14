#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6570077650329304147ULL;
unsigned long long int var_7 = 17051300302772776668ULL;
unsigned long long int var_9 = 17264922947748894313ULL;
unsigned long long int var_12 = 17211367187164037251ULL;
int zero = 0;
unsigned long long int var_19 = 14709866555663075093ULL;
unsigned long long int var_20 = 5810523649052964039ULL;
void init() {
}

void checksum() {
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

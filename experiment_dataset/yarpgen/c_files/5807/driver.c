#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10050150574847967435ULL;
unsigned long long int var_5 = 15482036231679873821ULL;
unsigned long long int var_7 = 698335224538093674ULL;
unsigned long long int var_8 = 5065277177494815133ULL;
unsigned long long int var_9 = 9312313893217611264ULL;
unsigned long long int var_11 = 5184101295089877583ULL;
unsigned long long int var_16 = 4889985161514356031ULL;
unsigned long long int var_19 = 11202903381270476337ULL;
int zero = 0;
unsigned long long int var_20 = 13386825269551407263ULL;
unsigned long long int var_21 = 16320153519494903101ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

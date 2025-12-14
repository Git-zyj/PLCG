#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10584908533953223994ULL;
unsigned long long int var_7 = 8215661859119720071ULL;
unsigned long long int var_8 = 11866947596689021588ULL;
unsigned long long int var_9 = 9379004395999862091ULL;
unsigned long long int var_11 = 8700786864546913715ULL;
unsigned long long int var_12 = 11319195213207008760ULL;
unsigned long long int var_13 = 4644590310528063648ULL;
int zero = 0;
unsigned long long int var_16 = 14447736922284587110ULL;
unsigned long long int var_17 = 12794251348329774584ULL;
unsigned long long int var_18 = 47728164576797502ULL;
unsigned long long int var_19 = 12070016422730665296ULL;
unsigned long long int var_20 = 18390322179838838372ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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

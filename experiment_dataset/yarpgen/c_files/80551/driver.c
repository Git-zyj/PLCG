#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10067889227942285240ULL;
unsigned long long int var_3 = 5047772826577189050ULL;
unsigned long long int var_5 = 12358688250262214776ULL;
unsigned long long int var_6 = 10317475774685628484ULL;
unsigned long long int var_9 = 9043305218668998156ULL;
int zero = 0;
unsigned long long int var_11 = 14517863376883365987ULL;
unsigned long long int var_12 = 3667373300718469089ULL;
unsigned long long int var_13 = 3506381246983500122ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((max(4843226656389262945, (65530 >= 1))) + 10);
        var_20 ^= (0 || 6);
        var_21 |= (min(6, ((((-13591 >= 65527) / (1 && 1132503762))))));
    }
    var_22 &= (((((((-944305491816115394 + 878134349) != (((min(1, 1)))))))) != (min((-77 && -1491084881), (7 + 0)))));
    var_23 = (max(((((0 || 1) || 1))), (max(12398852705781191593, 6718160240887378142))));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_24 = (min(var_24, 11951078275840729008));
        arr_8 [i_1] = 1;
        var_25 = (((0 || 3480) + 6466299619116943593));
    }
    #pragma endscop
}

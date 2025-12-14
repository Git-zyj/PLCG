/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = ((max(((((var_8 + 2147483647) << (var_3 - 2118052464)))), var_3)));
    var_12 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((((((arr_3 [i_0] [i_0] [i_0]) ? (arr_2 [i_1 + 1] [i_1 + 2]) : (arr_0 [3])))) ? (arr_3 [i_0] [i_0] [i_1 - 1]) : (arr_3 [i_0] [i_0] [i_1]))))));
                var_14 = (arr_3 [i_1] [i_1] [i_0]);
                var_15 = (((arr_0 [i_1 + 2]) < ((31 ? (arr_0 [i_0]) : ((2147483641 ? 2418 : 32767))))));
                var_16 = (((((arr_2 [i_1 + 2] [i_1 + 2]) < (arr_1 [i_1 + 1]))) ? var_3 : (((((arr_2 [i_1 + 1] [i_1 + 1]) == var_8))))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_17 = (max(var_17, (min(var_1, (((arr_0 [i_2]) ? (~var_5) : (min((arr_2 [i_2 + 2] [i_2 + 2]), var_0))))))));
        var_18 = 3366666998;
        var_19 = ((((arr_7 [i_2 + 3]) & (~3))));
        var_20 = ((((((3366667001 & 4294967287) * var_2))) ? (928300297 == var_5) : (((arr_0 [i_2 + 1]) ? 104 : (arr_4 [i_2] [i_2 + 3] [i_2 - 1])))));
        var_21 |= (max(((15422 ? 2599815095963426243 : 12)), -26));
    }
    #pragma endscop
}

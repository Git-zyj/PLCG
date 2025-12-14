/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_8 ? -25811 : (~25797)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        var_13 = ((((((arr_1 [i_0]) ? var_6 : (arr_1 [i_0])))) && var_9));
        arr_4 [i_0] = (((((arr_0 [i_0]) + (arr_0 [i_0])))) ? (arr_0 [8]) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
        arr_5 [i_0] = (arr_1 [11]);
        var_14 = (((var_7 == (var_6 * 0))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (((~-1) ? -25742 : (((((arr_6 [i_1]) ? var_6 : 4294967295))))));
        var_15 ^= ((~(min((arr_6 [i_1]), (arr_0 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 21;i_5 += 1)
                {
                    {
                        var_16 = ((26185 ? (max(8011679463824852982, (arr_9 [i_5 - 2]))) : ((~(max(var_4, var_4))))));
                        var_17 = (min(var_17, (arr_15 [i_2] [i_3] [i_4] [i_5])));
                        arr_19 [i_5] [i_3] [i_3] [i_3] [i_3] [i_3] = (7423620168159796423 ^ -28);
                        var_18 -= ((25824 > ((0 >> (((arr_18 [i_5 + 1] [i_5 + 1] [i_4] [i_5]) - 125))))));
                    }
                }
            }
        }
        var_19 = ((-(arr_15 [i_2] [5] [i_2] [8])));
    }
    #pragma endscop
}

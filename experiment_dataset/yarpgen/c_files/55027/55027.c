/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 9223372036854775807;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0]) ? (-62 < var_3) : var_0));
        var_11 = ((((~(min((arr_1 [i_0 - 1]), var_2))))) ? ((min(var_3, var_6))) : (min(9223372036854775807, (arr_1 [i_0 + 1]))));
    }
    var_12 = ((+(max((~0), (~var_8)))));
    var_13 = (max(var_13, 60173));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            {
                var_14 += (arr_5 [i_1]);
                arr_10 [i_1] [i_2] [i_1] = (max((((-(1483932742 - var_8)))), (min((((var_6 > (arr_2 [i_1])))), (max((arr_7 [i_1]), (arr_0 [i_1])))))));
                arr_11 [i_2] = ((~(((arr_0 [i_1]) ? (arr_9 [3] [i_1] [i_2]) : 1483932730))));

                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_15 = ((-62 ? -9223372036854775807 : 421368916));
                    arr_14 [i_1] [i_2] [i_3] [i_3] = (min(((max(421368916, 9223372036854775807))), (((arr_6 [i_1]) % (arr_6 [i_1])))));
                }
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    var_16 ^= (min(((max(48, (-127 - 1)))), (arr_7 [i_1])));
                    var_17 = (min(var_17, (((((min(var_1, (arr_12 [i_1] [i_1] [i_2] [i_1])))) ? (arr_17 [5] [i_2]) : (~var_8))))));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_20 [i_4] [i_1] = (min(((~(((arr_0 [i_4 - 1]) ^ var_8)))), var_0));
                        var_18 = (min(((((((-(arr_19 [i_4 - 1] [i_1])))) ? (arr_8 [i_1]) : ((var_0 ? var_8 : -75))))), (min(((2611309052983969613 ? 116 : -9223372036854775807)), (arr_7 [i_1])))));
                    }
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_19 = ((var_2 - (-9223372036854775807 - 1)));
                    arr_23 [i_6] [i_2] [i_6] [i_6] = (((~(max((arr_16 [i_1] [i_1] [i_6]), 421368908)))));
                }
            }
        }
    }
    #pragma endscop
}

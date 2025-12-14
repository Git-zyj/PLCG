/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_14 = ((~(-20841 > -20834)));

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_15 = (arr_2 [i_0]);
            var_16 = (max(var_16, var_2));
        }
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_15 [i_3] &= ((!(((var_4 ? var_11 : -3)))));
                        var_17 = (i_0 % 2 == 0) ? ((((var_11 << (((arr_14 [3] [i_0]) + 85)))) > (((-(arr_1 [i_0] [i_4])))))) : ((((var_11 << (((((arr_14 [3] [i_0]) + 85)) + 34)))) > (((-(arr_1 [i_0] [i_4]))))));
                        arr_16 [i_0] [i_0] [20] [i_0] = (((arr_3 [i_0 - 1] [i_2 - 1]) ? (((arr_7 [i_0 - 1] [i_0 - 1]) ? (arr_8 [i_0 - 1]) : (arr_4 [i_0]))) : (((var_8 ? -2 : (arr_3 [i_2 - 1] [i_2 - 1]))))));
                    }
                }
            }
            var_18 = (arr_12 [i_0] [i_2] [i_2 + 1] [i_2 + 1]);
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_19 = (arr_4 [i_0]);
            var_20 = 2931598653718605303;
        }
    }
    var_21 = -2;
    var_22 = 1;
    var_23 = ((((min(var_4, (var_0 < var_5)))) ? (var_9 & var_11) : var_7));
    var_24 = ((-((max(var_3, (1 == 1))))));
    #pragma endscop
}

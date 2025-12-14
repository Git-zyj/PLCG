/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((~((((arr_1 [i_0]) > (arr_1 [i_0]))))));
        arr_4 [i_0] = ((var_14 <= (((!(arr_0 [i_0]))))));
        var_16 = ((((((0 * 0) ? 107 : var_5))) || ((((161176308 ^ var_15) ^ (((arr_2 [i_0] [i_0]) ? var_2 : var_9)))))));
        var_17 &= (max(2015976896, (max((arr_0 [20]), (max(var_11, var_0))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_18 = (min(var_18, ((~(arr_0 [i_1])))));
        var_19 = var_14;
        var_20 = 979024906;
        var_21 = 2970159072;
    }
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        var_22 = (~((~(max(0, (arr_2 [20] [i_2]))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                {
                    arr_18 [i_3] [i_3] [i_3] = (max((min(2278990399, (arr_1 [i_3])), (~2400316142))));
                    var_23 = (min(var_23, (min((((arr_15 [16] [i_2 - 2] [4]) ? (arr_15 [6] [i_2 - 3] [18]) : (arr_15 [14] [i_2 + 1] [14]))), (~var_7)))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_24 [i_3] [i_3] = (((min(((((arr_16 [i_2]) || var_14))), (((arr_11 [i_2]) ? (arr_13 [i_3] [i_3] [i_3]) : var_0)))) > var_12));
                                var_24 -= ((arr_12 [i_5 + 1] [i_2 - 1]) * (((arr_12 [i_5 + 1] [i_2 - 2]) ? (arr_12 [i_5 + 1] [i_2 - 3]) : var_12)));
                                arr_25 [i_4] [10] [18] &= var_13;
                                arr_26 [i_2] [i_3] [i_3] [i_3] [i_5] [i_3] [i_6] = (~var_7);
                            }
                        }
                    }
                }
            }
        }
        var_25 = ((max((arr_0 [6]), (arr_16 [i_2]))) - (arr_20 [i_2] [i_2] [i_2 + 2] [i_2] [i_2] [4]));
    }
    var_26 = (min(var_26, ((var_11 % (max(((var_3 << (var_11 - 4028345564))), ((var_7 ? var_7 : var_14))))))));
    #pragma endscop
}

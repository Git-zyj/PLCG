/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(-119583666168445976, ((40187 ? var_7 : ((3584659001592413165 ? var_11 : var_4))))));
    var_15 = ((((max((3584659001592413164 < 96), var_3))) ? var_6 : (!var_4)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (arr_0 [i_0] [3]);
        arr_2 [i_0] = ((max((((arr_0 [i_0] [i_0]) ? -3584659001592413178 : -14999)), (min((arr_0 [i_0] [i_0]), 3584659001592413172)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 |= (arr_5 [18] [i_1]);
        var_18 = (((arr_3 [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_4 [i_1] [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 20;i_3 += 1)
            {
                {
                    var_19 = (arr_5 [i_1] [i_2]);
                    var_20 &= (-((-108 ? (arr_8 [i_2] [i_2] [i_2]) : (arr_3 [i_3]))));
                    var_21 = (max(var_21, (((!(arr_7 [i_3 - 4] [i_3 + 1] [i_2]))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    var_22 = (max((((arr_16 [15] [i_5]) && (arr_8 [i_5] [i_5] [i_6]))), (((arr_8 [i_4] [i_4] [i_6]) || var_10))));
                    var_23 &= (-940007696 ? (((min(2843, -3584659001592413154)))) : ((~(~1))));
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (((((max((!var_5), ((-(arr_4 [i_0] [1] [11] [1])))))) ? ((-(arr_5 [i_1] [i_2 - 1] [i_2 - 1] [8]))) : var_14)))));
                    var_17 = (min(var_17, (((-1493368554 ? (((min((arr_4 [i_0] [i_2 - 1] [1] [i_1]), (arr_4 [i_0] [i_2 + 1] [i_2] [7]))))) : (((arr_3 [i_0] [i_0] [i_2]) ? (((min((arr_1 [i_0] [i_2 - 1]), 36138)))) : var_9)))))));
                    arr_6 [i_0] [i_0] [i_2] = ((~(!1)));
                }
            }
        }
        arr_7 [i_0] = (min((min((arr_5 [i_0] [i_0] [i_0] [i_0]), (arr_5 [i_0] [1] [i_0] [i_0]))), (~1210677278)));
        arr_8 [1] |= ((-((min(var_5, 25413)))));
        var_18 *= (arr_3 [i_0] [i_0] [i_0]);
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_19 += (max((((((max((arr_11 [i_3]), var_4))) % ((40127 ? 40119 : -10611))))), 40129));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_4] [i_5] = (((arr_9 [i_5] [i_3 - 1]) + -10611));
                    var_20 *= (min(1, 1));
                    var_21 = (min(var_21, (arr_4 [20] [i_4] [i_3] [i_3])));
                }
            }
        }
        var_22 += (arr_12 [i_3] [i_3] [i_3]);
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_23 &= (((arr_18 [i_6]) ? ((-(arr_19 [i_6]))) : (arr_19 [i_6])));
        var_24 = (min(var_24, (!2589388583)));
    }
    var_25 += (!var_3);
    #pragma endscop
}

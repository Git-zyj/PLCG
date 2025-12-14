/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((-var_10 ? (min(4826296936907349099, (max(-4826296936907349100, -4826296936907349100)))) : 4826296936907349117)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_18 = (max(var_18, ((max(((min(1410885524419643762, (arr_2 [13] [13])))), -4826296936907349099)))));
        arr_3 [10] [i_0] = (arr_2 [i_0] [i_0]);
        var_19 += ((4826296936907349099 && ((max((((var_8 + (arr_2 [1] [i_0])))), var_9)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_20 += ((+(((((((arr_2 [i_1] [4]) ^ var_13))) > var_5)))));
        arr_6 [15] = ((!((((108 ^ 4826296936907349099) & (241 & 4826296936907349099))))));
        arr_7 [i_1] [i_1] = var_13;
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_21 = 0;
            var_22 &= (arr_0 [i_3] [i_3]);
        }
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        arr_20 [i_6] [i_2] [i_2] [2] = (min((arr_14 [i_2] [i_2]), (arr_14 [i_2] [i_5])));
                        arr_21 [i_2] [i_2] = (max((arr_9 [i_2]), (((3 >= 268435328) ? -1 : (((arr_4 [i_2]) | (arr_0 [i_2] [i_2])))))));
                    }
                }
            }
            var_23 = (-127 - 1);
            var_24 = (min((arr_13 [i_4] [i_2]), (arr_1 [i_2])));
        }
        /* LoopNest 3 */
        for (int i_7 = 4; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    {
                        var_25 -= ((~(arr_11 [i_7 + 2] [3])));
                        arr_28 [8] [11] [i_2] = 4826296936907349100;
                        arr_29 [i_9] [i_2] [i_8] [i_2] [13] = (max((arr_1 [i_9]), (((((arr_1 [i_8]) <= (arr_27 [12] [i_7]))) ? (arr_22 [i_7 - 3] [i_7 - 2] [i_2]) : (arr_27 [i_7 - 4] [i_7 + 2])))));
                    }
                }
            }
        }
    }
    var_26 = ((~(var_9 != var_12)));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_10 -= 4969651939883398195;
                        var_11 -= ((var_0 ? (min(8102, (min((arr_0 [8] [i_0]), (arr_2 [i_0] [i_0] [i_0]))))) : 161));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_12 -= (max(4117748167, (arr_2 [i_4] [i_2] [i_1])));
                        var_13 = (min(var_13, (((max((min(var_6, var_0), (min(-1540, (arr_5 [i_0] [6]))))))))));
                        var_14 -= (((arr_4 [i_4] [i_2] [i_1] [i_0]) > var_7));
                        var_15 ^= ((((min(var_7, var_2))) || var_4));
                    }
                    var_16 = (~95);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_17 -= (((((-45 ^ ((min((arr_18 [1] [i_6] [i_8] [i_9]), (arr_19 [i_6] [i_6] [i_8] [i_9]))))))) ? var_3 : (((((58 ? (arr_18 [i_6] [i_7] [i_7] [i_9]) : var_6))) ? (51 * var_6) : (arr_15 [i_5 - 2] [i_5])))));
                                var_18 ^= (~-92);
                            }
                        }
                    }
                    arr_26 [i_5] [i_5 + 3] [i_7] = (min(-1, (min(((var_6 ? (arr_13 [i_7]) : var_8)), ((((arr_22 [i_7] [i_7] [i_7] [i_7]) <= var_6)))))));
                    var_19 = (max(((min((arr_18 [i_6] [i_5 - 2] [i_5 - 1] [i_5 - 1]), (arr_13 [i_5 + 1])))), ((~(arr_13 [i_5 + 3])))));
                    var_20 = (max(var_20, ((max(((var_3 ? (arr_14 [i_6] [i_5 - 2] [i_5 - 1]) : (arr_14 [i_7] [i_5 + 4] [i_5]))), (arr_14 [i_6] [i_5 + 3] [i_5 + 2]))))));
                }
            }
        }
    }
    #pragma endscop
}

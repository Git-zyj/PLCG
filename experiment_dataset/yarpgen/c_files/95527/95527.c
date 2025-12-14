/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_16 ^= ((+(((var_12 || ((((arr_5 [i_0]) ? var_9 : (arr_7 [i_3] [i_3])))))))));
                                var_17 = (max(var_17, ((((!(var_0 ^ 249))) ? ((((((-9223372036854775807 - 1) ? 16876 : 40655))) ? ((min((arr_3 [8] [i_1]), 236))) : var_12)) : (~-2147483639)))));
                            }
                        }
                    }
                    arr_14 [i_1] [0] [i_1] = (max(47, 101));
                    var_18 |= (((((arr_10 [1] [i_1 + 3] [4]) + (arr_10 [4] [10] [4]))) * (((arr_10 [8] [4] [10]) / (arr_10 [1] [i_1] [1])))));
                }
            }
        }
    }
    var_19 = (max(var_1, ((max(var_13, 2147483640)))));
    var_20 = ((var_6 | (((((1 ? 4294967281 : 147))) ? (2147483647 & -1) : 1))));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 9;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_21 += (((((214 ? (((arr_18 [11]) ? 1 : var_6)) : (((arr_20 [5] [i_8]) | (arr_22 [i_5] [8] [i_5])))))) | ((1 ? 6 : 4294967292))));
                            var_22 = ((((var_8 & ((min(var_5, var_0)))))) ? ((-(!var_12))) : ((1 / ((var_9 | (arr_16 [0]))))));
                        }
                    }
                }
                var_23 &= arr_21 [i_6];
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_0 & var_3) | (~var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = ((-(((min((arr_6 [12] [i_0]), 37684))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_18 = (!(!-8123882492060060510));
                            arr_13 [i_0] [i_1] [i_2] [i_1] = (((((arr_0 [i_2]) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_2])))) & ((~(arr_0 [i_1]))));
                            arr_14 [i_1] [3] [i_3] = (min((arr_0 [i_1]), (((-(!-503146712))))));

                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                arr_17 [i_0] [8] [i_0] [i_0] [i_0] [i_0] [i_0] &= var_12;
                                var_19 &= (arr_8 [i_0]);
                                var_20 = (((((-(((arr_8 [i_1]) >> (((arr_11 [i_1] [i_1] [i_1] [i_1]) - 16023396941060199995))))))) ^ 6197283899009034396));
                                arr_18 [i_0] [i_1] [i_0] [i_3] |= (((((~-9) > 27852)) ? (((~((max(37703, 6858)))))) : (((arr_11 [i_0] [12] [12] [i_4]) & var_10))));
                                var_21 -= max(((((min((arr_1 [i_4]), (arr_7 [i_2] [i_4] [i_4] [i_3])))) ? ((-(arr_12 [i_4]))) : (arr_9 [i_0] [i_1] [i_2] [i_2]))), -32757);
                            }
                            arr_19 [16] [16] [6] [i_1] = ((((max((((arr_11 [i_1] [8] [i_2] [i_2]) & (arr_15 [i_2] [i_2] [i_2] [0] [0]))), (arr_15 [i_2] [i_2] [i_2] [i_2] [i_2])))) && ((((!-503146736) ? (arr_8 [i_0]) : (5990 >= var_8))))));
                        }
                    }
                }
                arr_20 [i_1] = -12;
                var_22 -= (((((+(((arr_4 [i_1] [4] [i_0]) ? 29966 : var_5))))) ? (((arr_0 [i_0]) | 10917)) : (((~((max(5990, (arr_3 [i_0])))))))));
            }
        }
    }
    var_23 &= ((~(max(var_11, var_9))));
    #pragma endscop
}

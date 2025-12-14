/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((((((!var_11) ? 201326592 : var_0)) ^ (((var_12 > ((var_12 ? 29729 : 201326592))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = (((--18917) && ((max(((var_4 ? (arr_5 [i_0] [14] [i_0]) : 177)), -29729)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] = (((arr_2 [i_0]) & (min((arr_3 [i_0]), 18893))));
                                var_19 ^= -18917;
                            }
                        }
                    }
                    var_20 = ((17317747013858326857 < ((((min((arr_6 [i_0] [i_0] [11] [i_0]), var_11)) + -166)))));

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_21 = (max(var_21, ((min(var_5, (((var_2 < (arr_14 [i_2 + 2])))))))));
                        var_22 = (((arr_0 [i_0]) % (arr_10 [i_0] [i_2] [i_1] [i_1] [i_0] [i_0] [i_0])));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((29729 * 35806) ? (((((arr_9 [i_1] [i_1] [i_1] [i_1] [i_1]) < 18917)))) : (max((arr_22 [i_0] [1] [12] [i_6] [i_7]), var_6)))) + (35807 ^ var_5)));
                                arr_25 [i_7] [i_1] [i_2] [i_1] [i_0] &= ((18936 || (((-35817 ? var_1 : (min(35810, (arr_8 [i_1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((~((max(var_1, var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] = (arr_4 [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_11 = var_8;
                                arr_13 [i_0] = var_1;
                                var_12 *= (min(((max((arr_11 [0] [i_1] [i_1] [i_1]), (((!(arr_7 [i_4] [i_4]))))))), ((max(var_6, 56)))));
                            }
                        }
                    }
                }
                var_13 = (max(var_13, (((var_6 ? (((((var_6 ? var_1 : var_3))) ? (arr_2 [i_1] [i_0]) : 61632)) : (arr_6 [i_0] [i_1] [i_1] [i_1]))))));
                var_14 &= ((((((arr_12 [i_1]) ? (arr_12 [i_1]) : (arr_12 [i_0])))) ? ((((arr_7 [21] [1]) & var_0))) : (arr_1 [i_0])));
            }
        }
    }
    var_15 = (max((((((var_5 ? -1449772460517803264 : var_3)) > (((min(var_4, var_7))))))), ((var_1 ? var_6 : var_3))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                var_16 = (min(var_16, ((((61623 & 61623) ? (((arr_4 [i_5] [i_5] [i_6]) ? var_0 : (((arr_15 [i_6]) + (arr_7 [i_5] [i_6]))))) : ((((arr_11 [i_6] [i_5] [i_5] [i_5]) & (arr_10 [19] [i_6] [i_5] [i_5] [i_6])))))))));
                var_17 = ((-((((var_5 && (arr_11 [i_5] [i_5] [i_5] [i_5]))) ? -118 : 11080702218310505268))));
            }
        }
    }
    #pragma endscop
}

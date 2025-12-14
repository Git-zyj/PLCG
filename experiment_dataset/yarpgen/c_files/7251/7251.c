/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_16 = (max(56, (-127 - 1)));
                            arr_10 [i_0] [i_1] [i_1] [i_3] = (((-((117 ? 127 : 56)))));
                            arr_11 [i_0 + 1] [i_0 + 2] [i_0] [i_0] = (min((max(0, 1972196188)), (((-(arr_1 [i_0] [i_3 - 2]))))));
                            var_17 = ((!((max(((2322771117 ? (arr_3 [i_2] [i_1] [i_0]) : (-127 - 1))), (arr_7 [i_3] [i_2] [i_0] [i_0]))))));
                            var_18 |= ((min(0, var_13)));
                        }
                    }
                }
                var_19 = (((((max(1972196174, var_6))) ? (max(var_6, -121)) : -55)));
            }
        }
    }
    var_20 = (min((((-((min(56, 200)))))), (max(var_5, ((127 ? 1183451497 : var_3))))));
    var_21 = (min(var_10, 127));
    #pragma endscop
}

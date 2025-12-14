/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= ((((((35184372088831 ? var_1 : 247)))) ? 35377 : ((var_8 ^ ((5 ? var_0 : 30148))))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_12 *= (max((((arr_1 [i_0]) * ((var_2 ? (arr_2 [i_0]) : (arr_1 [i_0]))))), 35398));
        var_13 = (max(var_13, ((min((arr_0 [i_0 - 3] [7]), var_7)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_13 [1] [1] [i_2] [i_2] = (((~var_6) < (((((-(arr_7 [i_2] [i_3] [16]))) * (arr_4 [i_3]))))));
                        var_14 += ((35384 ^ ((30164 ? (arr_4 [i_4]) : 35398))));
                    }
                }
            }
        }
        arr_14 [12] = (((35374 ? -1117363339535976903 : 70)));
        var_15 = (((min(62, 68))));
    }
    #pragma endscop
}

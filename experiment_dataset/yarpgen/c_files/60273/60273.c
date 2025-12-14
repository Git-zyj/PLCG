/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [15] [i_0] [i_0] [i_0 - 2] |= (max(((((min(var_0, var_9))) ? ((62375 ? var_5 : (arr_2 [i_0]))) : var_5)), (!var_9)));
                    var_13 = (min(var_13, var_0));
                }
            }
        }
    }
    var_14 = (min(var_14, (((((min(0, 43913))) ? var_12 : (((var_3 / var_2) ? (min(var_11, var_4)) : ((var_0 ? (-2147483647 - 1) : var_1)))))))));
    var_15 = 20;

    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        arr_10 [i_3] = var_11;
        var_16 = var_0;
        var_17 = (min((max((min(15366460115275832129, 15366460115275832129)), 15366460115275832129)), ((((((var_8 ? 1 : var_11))) ? 36 : -121)))));
        var_18 = (((2010033900579993493 ? 1250454050 : 671661938375654156)));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_19 = (max(var_19, (((((var_0 ? (arr_11 [i_4] [i_4]) : ((3221225472 << (((arr_12 [13] [i_4]) + 227777299)))))) >> (((!((((arr_1 [i_4] [i_4]) ? (arr_13 [i_4]) : var_8)))))))))));
        var_20 ^= ((((((((1 ? var_11 : var_8))) ? (((var_7 ? 212 : 65530))) : (max(1, var_2))))) ? (((((arr_11 [8] [i_4]) ? var_0 : 307303795)))) : (min((min(3539579398, (arr_1 [i_4] [2]))), ((((arr_12 [i_4] [i_4]) / var_12)))))));
        var_21 *= ((((((((56431 ? (arr_13 [1]) : var_10))) > ((var_4 ? var_0 : -9499))))) | ((10188 ? 1006632960 : (var_0 || 1)))));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    var_20 -= ((~(+-50554)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        var_21 = 211;
        var_22 = var_4;
        var_23 = ((var_17 ? (6561242170598921912 ^ 22139) : ((((max(2, var_3)) - (((-(arr_0 [17])))))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] = (arr_0 [i_1]);
        var_24 = ((((max(1591969684, (arr_1 [i_1] [1])))) ^ (~-8900890688353021741)));
        arr_8 [i_1] &= (((((((6561242170598921896 ? 255 : 2702997612))) ? (min(5566097748612225145, var_7)) : (((var_9 ? var_16 : var_10))))) > ((((arr_4 [i_1]) ? (((-8736851379356684589 ? (arr_0 [i_1]) : 1591969684))) : (arr_6 [i_1]))))));
        arr_9 [i_1] = ((((min(var_1, var_14)) ? var_12 : 237)));
    }
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        arr_13 [i_2] = 1;
        arr_14 [i_2] = (max((arr_10 [i_2]), (var_12 >= 1)));
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 19;i_4 += 1)
        {
            {
                arr_19 [i_3] = 255;
                var_25 = (((var_3 % ((var_10 ? (arr_15 [i_3]) : (arr_0 [i_4 + 2]))))));
                var_26 = var_11;
                var_27 = var_17;
                var_28 = 3740486363429045777;
            }
        }
    }
    #pragma endscop
}

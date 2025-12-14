/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((3482493401 ? (arr_0 [7]) : 812473895));
        var_11 = var_4;

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            var_12 -= var_2;
            arr_8 [14] [i_1] [i_0] = var_5;
            var_13 ^= ((((0 ? 3482493401 : 4095)) & 255));
        }
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            arr_11 [i_0] [i_0] [i_0] = (!var_7);
            var_14 = (max(var_14, 773233092));
        }
        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                var_15 = (((arr_18 [i_3 + 1] [i_3] [i_3 - 2] [i_3 - 3]) ? 812473895 : (arr_18 [i_3 - 2] [i_3] [i_3 - 3] [i_3 - 2])));
                arr_19 [19] [i_0] [i_4] = (!var_6);
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_26 [i_0] [i_7 + 1] [i_6] [i_5] [i_0] [i_0] = ((+((25284 ? (arr_4 [13]) : -9))));
                            var_16 = (var_6 ? (arr_20 [i_5] [i_5] [i_5]) : (((var_0 ? var_8 : -1))));
                            var_17 += var_7;
                        }
                    }
                }
            }
            arr_27 [1] [i_0] [i_3] = ((((((arr_4 [i_3 - 3]) ? var_9 : var_6))) ? (~812473894) : 65535));
        }
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        var_18 = ((773233092 ? (((((-(arr_24 [i_8] [i_8] [i_8] [i_8] [1])))) ? ((((arr_15 [i_8]) / var_6))) : -973470703745887222)) : ((min((12 / 773233092), var_7)))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 13;i_10 += 1)
            {
                {
                    arr_34 [i_8] [i_9] [9] = (arr_9 [i_8]);
                    var_19 = (max(var_19, ((max((arr_13 [i_8] [0] [i_10 - 1]), ((var_7 ? (min(0, -9)) : var_7)))))));
                }
            }
        }
    }
    var_20 = var_1;
    var_21 |= var_3;
    var_22 = (min(var_22, ((max((var_3 <= 1275928251), (max(1, ((min(var_6, var_4))))))))));
    var_23 = 160;
    #pragma endscop
}

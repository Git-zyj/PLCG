/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] = var_9;
                    arr_9 [i_2] [i_2] [i_2] [i_2] &= ((((((arr_3 [i_1 + 3]) != var_9))) / (var_0 != var_2)));
                    var_11 ^= var_4;
                    var_12 = var_9;
                }
            }
        }
    }
    var_13 = var_3;
    var_14 -= var_6;
    var_15 = (max(var_15, (~var_9)));

    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 8;i_5 += 1)
            {
                {
                    var_16 = (arr_15 [i_5 - 3] [i_4] [i_5] [i_3]);
                    var_17 *= ((!(((var_0 ? var_1 : (arr_6 [i_4]))))));
                    var_18 += (((max((~var_7), (((arr_12 [i_3] [i_3] [i_5 - 2]) | var_5)))) >= ((max((arr_14 [1] [i_5 + 2] [i_3] [i_5 - 1]), -var_8)))));
                }
            }
        }
        var_19 = ((+((((var_0 + var_7) != (((9366 < (arr_4 [i_3] [i_3])))))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {
                    var_20 -= var_5;
                    var_21 = (var_7 / var_0);
                }
            }
        }
        var_22 *= ((var_2 ? var_10 : var_5));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = 255;
                var_20 = 17716;
                arr_7 [i_0] = ((47820 - (-4238293676 * var_17)));
                var_21 = (min(var_21, (((((var_13 ? 36537 : (arr_5 [i_1] [i_1] [i_1])))) ? (((arr_5 [i_1] [i_0] [6]) / var_16)) : (min(var_12, var_17))))));

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_22 -= 47820;
                        var_23 = 59668;
                        var_24 = (arr_4 [i_0] [i_1]);
                    }
                    var_25 = 9151314442816847872;
                }
                /* vectorizable */
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    var_26 ^= (((arr_12 [i_0] [i_1] [i_0] [i_1]) ? (arr_12 [i_0 - 2] [i_1] [2] [i_4]) : 47820));
                    var_27 = var_14;
                    var_28 = (min(var_28, (~3543234252)));
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_29 = ((-244632222 == (arr_22 [i_7 + 1] [i_7 + 3] [i_7 - 4] [i_7 - 3] [i_7 + 1] [i_0])));
                                arr_24 [i_0] [i_0] = ((var_1 ? ((max((arr_19 [i_0 + 1] [i_7 - 4] [i_0 + 1]), (arr_4 [i_7 + 1] [i_0 - 1])))) : ((+((-5891292645338761129 ? (arr_3 [i_1] [i_5] [i_6]) : var_11))))));
                                arr_25 [i_0] [i_1] [i_5] [i_0] [6] = (max((min(3442946469, ((min(var_13, 244632222))))), ((min(24765, 56673605)))));
                            }
                        }
                    }
                    arr_26 [i_0] = ((var_7 || ((((1 << (56673605 - 56673600)))))));
                    arr_27 [i_1] |= (arr_10 [i_5] [i_0 + 1]);
                    var_30 = (min((((arr_2 [i_0 - 1] [i_5]) ? (arr_2 [i_5] [i_0 + 1]) : var_17)), (((((var_17 ? 2020806376 : var_17))) ? (11010 + var_6) : ((max(45, var_5)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 15;i_9 += 1)
        {
            {
                var_31 -= ((+((var_18 ? (arr_20 [i_9] [i_8 + 1] [i_8] [i_8 - 2] [i_8 - 2] [i_8 - 2]) : var_12))));
                arr_33 [i_8] [i_8] = (min(var_8, ((var_17 >= (arr_31 [i_8])))));
                arr_34 [i_8] [i_8] [i_8 + 1] = (min((((min((arr_9 [i_9] [i_8] [i_8] [i_8]), (arr_23 [i_8] [i_9 + 1] [i_9 + 1] [i_9] [i_8]))))), 2619079796));
            }
        }
    }
    var_32 = (min(var_32, (((var_17 + (max((var_2 - var_4), var_8)))))));
    var_33 = ((var_6 ? 0 : var_8));
    #pragma endscop
}

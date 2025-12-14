/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((min(var_0, (0 * -22883))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_11 -= ((-((min(1, var_7)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_12 = ((!((((~-32764) ? (min((arr_2 [i_1]), -8122184517674533125)) : ((((-32767 - 1) + 0))))))));
                            var_13 = (min(var_13, ((max((((arr_10 [i_1] [i_3] [i_1]) / (arr_10 [i_0] [i_1] [i_0]))), (((arr_10 [i_1] [i_0] [i_1]) / (arr_10 [i_0] [i_0] [i_0]))))))));
                        }
                    }
                }
                arr_12 [i_1] [i_1] [i_1] = (((-9 ? -13497 : (arr_2 [i_0 + 1]))));
            }
        }
    }

    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_14 -= var_6;
        var_15 -= ((min((arr_0 [i_4]), ((433646530990623616 ? 1 : 14707)))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_16 -= ((var_7 ? ((0 ? (arr_9 [i_5] [i_5] [i_5] [i_5]) : (arr_15 [i_5]))) : (((arr_16 [i_5] [i_5]) ? (arr_2 [i_5]) : (arr_6 [i_5] [i_5] [0] [i_5])))));
        var_17 = 0;
    }
    for (int i_6 = 1; i_6 < 22;i_6 += 1)
    {
        arr_20 [i_6] [i_6] = ((((max(((-4935 ? (arr_7 [i_6]) : (arr_3 [i_6]))), var_8))) ? ((11109 ? (arr_13 [i_6]) : (-8767588040882624714 >= -245748548036218010))) : (((((22669 ? var_3 : var_6))) ? ((var_9 | (arr_15 [i_6]))) : (arr_1 [0] [i_6 - 1])))));
        var_18 -= ((((((arr_3 [i_6]) >= 32761))) < (arr_4 [i_6])));
        var_19 -= (arr_4 [i_6]);
    }
    var_20 = ((-((-989343967504291220 ? 0 : (1 == -4375101355510219886)))));
    #pragma endscop
}

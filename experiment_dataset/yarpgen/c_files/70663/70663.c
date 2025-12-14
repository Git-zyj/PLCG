/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_17 = ((((((((var_3 ? var_0 : var_13))) ? -1 : var_13))) == (max(var_5, var_7))));
        arr_2 [i_0] [i_0] = var_14;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [7] [i_1] [i_0 + 2] = ((var_12 & (max(var_10, ((var_8 ? var_14 : -3686915297321875592))))));
                    arr_8 [i_1] = -7533;
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_18 = (max(var_18, (((1 ? 31672 : 17397170908253335242)))));
        var_19 = (min(var_19, ((max(((max(var_9, (((var_9 ? -1 : -18)))))), (max((((0 ? var_1 : var_6))), (max(1049573165456216373, var_1)))))))));
        var_20 = (min(var_20, (((var_6 ? var_10 : (max(var_9, (var_4 - var_2))))))));
    }
    for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_21 = (max(var_21, var_14));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                    {
                        arr_19 [i_4] [i_5] [i_6] [i_7] &= -1880;
                        arr_20 [i_4] [i_5] [i_6] [i_7] [i_4] = ((((((var_11 || var_7) ? ((max(var_5, var_7))) : ((var_3 ? var_2 : var_15))))) ? (((max((max((-32767 - 1), -6602)), var_5)))) : ((((max(var_0, 21068))) ? (((var_0 ? var_10 : var_10))) : var_15))));
                    }
                    for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                    {
                        var_22 += (((var_2 ? (max(var_6, var_13)) : 584880377950159430)));
                        arr_24 [i_4 - 1] [i_5] [i_6] [16] = ((((var_14 ? (((max(-1308, var_0)))) : ((var_9 ? var_2 : 27579))))) ? var_15 : ((((((4095 ? var_0 : var_16))) ? -2 : var_12))));
                    }
                    var_23 *= var_13;
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        arr_28 [i_9] [i_9] = ((var_6 + (var_9 >= var_6)));
        var_24 += (max(((((max(3406146531, var_8))) ? (max(var_14, var_12)) : (((var_13 << (var_9 - 2866143019)))))), var_5));
    }
    var_25 = (((-32767 - 1) + -31254));
    #pragma endscop
}

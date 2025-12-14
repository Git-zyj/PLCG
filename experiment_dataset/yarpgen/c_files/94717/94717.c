/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, ((((((((arr_3 [i_3] [i_1] [i_3]) || 88)))) < ((+((1 ? (arr_5 [i_4] [i_2] [i_3]) : 4498721730348439849)))))))));
                                arr_12 [i_1] [i_0] [16] = arr_6 [i_3];
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
                var_17 &= ((((((((arr_3 [2] [i_1] [i_1]) + 2147483647)) >> (119 - 97)))) ? (min((min((arr_10 [i_0] [17] [i_0] [i_0] [i_0]), var_5)), 0)) : (((((arr_8 [i_0] [i_0] [i_0]) != 19524))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_18 += 2107258066162524885;
                    var_19 = ((max(16339486007547026731, (arr_11 [i_7] [i_5]))));
                    var_20 = -18581;
                    var_21 = var_5;
                }
            }
        }
    }
    var_22 = ((4498721730348439849 ^ ((max((min(var_6, 3279823359694183652)), (var_12 < var_5))))));
    var_23 ^= (min(-25412, var_5));

    for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
    {
        var_24 &= (!var_7);
        var_25 = ((var_10 ? (min(3, (max((arr_2 [i_8] [i_8]), 166)))) : (max((arr_11 [i_8] [i_8 + 1]), (max(var_3, 156))))));
        var_26 = (~(arr_8 [i_8 + 1] [i_8 - 1] [i_8 + 1]));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                {
                    var_27 = (arr_5 [i_9] [i_9] [i_11]);
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 13;i_13 += 1)
                        {
                            {
                                var_28 = var_6;
                                var_29 = -15587;
                            }
                        }
                    }
                }
            }
        }

        for (int i_14 = 2; i_14 < 13;i_14 += 1)
        {
            arr_41 [i_9] [i_9] = ((166 ? 20 : (arr_10 [i_9] [i_9] [i_9] [i_14] [6])));
            var_30 = var_0;
        }
        var_31 = (max(var_31, ((((arr_6 [i_9]) | (((arr_34 [12] [i_9 - 1] [4] [4] [i_9] [i_9]) ? (-32767 - 1) : var_13)))))));
    }
    #pragma endscop
}

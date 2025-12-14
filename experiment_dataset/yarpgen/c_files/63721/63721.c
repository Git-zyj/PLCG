/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [2] = ((var_8 < (var_0 || 115)));
        var_10 = (max(var_10, ((((arr_0 [i_0]) ? var_4 : var_6)))));
        var_11 = (1 / 3338);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_12 = (-3339 - var_8);
        var_13 = (((var_6 % var_8) ? (~0) : var_7));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_14 = (max(var_14, ((((~var_7) | (~var_4))))));
        var_15 = 2648165357;
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] = (min(((max((!55955), (-3367 || 224)))), var_0));
        var_16 = (max((arr_8 [i_3]), (arr_8 [i_3])));
        var_17 = (min(var_17, (~2648165357)));
        arr_13 [4] = (min((var_2 + var_0), ((-(arr_0 [i_3])))));

        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            var_18 = (max(var_18, var_2));
            var_19 = ((+(min((arr_10 [1] [i_3]), ((1 ? 87 : -3350))))));
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 10;i_7 += 1)
            {
                {
                    var_20 = max(((max((arr_10 [4] [i_6 - 1]), var_0))), (~6304199023894718489));
                    arr_24 [i_7] [i_7] [i_7] [i_7] = (min((var_2 || 6304199023894718489), (min(6304199023894718473, (arr_5 [i_6 + 1])))));
                    var_21 = (((var_3 && (255 || 1))));

                    for (int i_8 = 3; i_8 < 9;i_8 += 1)
                    {

                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            var_22 = (max(((var_7 - (((min(73, 0)))))), (arr_28 [i_5] [i_6] [i_7] [i_8 + 3] [i_8] [i_9 - 1])));
                            arr_31 [i_7] [i_7] [i_7] [i_7] [i_5] = (max(((max((arr_30 [i_6]), var_4))), (var_7 / var_3)));
                        }
                        var_23 = (var_9 || var_0);
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 11;i_11 += 1)
                        {
                            {
                                arr_38 [8] [i_6] [i_7] [i_10] [i_7] = (min(((((arr_32 [i_7] [i_11] [i_11 + 1] [i_7]) + 25644))), ((((max(var_6, var_9))) ? (max(var_7, 3757176001)) : 2648165343))));
                                var_24 &= -15;
                                arr_39 [i_7] [i_7] = (((((-(!var_2)))) % (min(var_3, (max(var_8, var_7))))));
                                arr_40 [i_5] [i_7] [i_7] [i_10] [i_11] = ((((-(~var_4))) + 10074));
                                arr_41 [i_5] [i_6] [i_7] [i_10] [i_7] [1] = ((((arr_18 [i_6 + 1] [i_7 + 1]) ? ((((arr_22 [i_5] [i_6] [i_10] [i_11]) << (((var_3 + 749436966) - 14))))) : (max(var_4, 2810597221862580312)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (min(var_25, 1));
    #pragma endscop
}

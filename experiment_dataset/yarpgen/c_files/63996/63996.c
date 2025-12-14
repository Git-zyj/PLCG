/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((~1) ? var_11 : (((var_14 ? var_2 : var_2)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = ((2762053286 ? (arr_1 [i_0]) : var_11));
        var_19 = ((~(arr_0 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [1] [i_0] [i_0] = (~1);

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_20 = var_6;
                            arr_14 [4] [i_3] [i_2] [3] [i_0] = (arr_3 [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_2] [i_3] [i_0] [i_5] [i_5] = (~1);
                            var_21 = ((-(arr_8 [i_2 - 1] [9] [i_0] [i_3] [i_3] [i_1])));
                        }
                        var_22 = var_1;
                        var_23 = (((arr_1 [i_0]) / 95));
                        arr_18 [i_0] [i_1] [i_1] [6] [i_1] = 8207749162546812276;
                    }
                }
            }
        }
        arr_19 [i_0] = ((1 ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : 1));
        var_24 = (((108 ? 1 : 1)));
    }

    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_25 = ((!((((arr_9 [i_6] [i_6] [8] [i_6] [i_6]) ? 1 : (arr_13 [3] [i_6] [i_6] [i_6] [i_6] [i_6]))))));
        var_26 = (~var_15);
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        arr_25 [i_7] = arr_23 [i_7] [i_7];
        arr_26 [8] [2] = (((((0 ? (arr_24 [i_7]) : var_0))) ? (1109733746 - 1109733731) : -1));
        arr_27 [1] = var_3;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    arr_32 [i_7] [6] = ((5269112423961560994 << (-468708611922699689 + 468708611922699718)));
                    arr_33 [11] [8] [8] [12] = (!120);
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        arr_38 [i_10] = (((arr_35 [i_10] [i_10]) ? 1 : 1791208489));
        /* LoopNest 3 */
        for (int i_11 = 2; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 21;i_13 += 1)
                {
                    {
                        var_27 = -8207749162546812285;
                        var_28 = (((arr_34 [i_11 + 2] [i_11 - 1]) ? ((8207749162546812259 ? 808734632 : -3984856836325308376)) : (((min(65535, -7001))))));
                        arr_45 [i_12] [i_11] [0] [i_13] [13] = ((((((!((((arr_39 [i_10]) ? -3984856836325308381 : (arr_43 [i_10] [i_11] [i_12] [i_13] [i_11 - 2])))))))) < (arr_44 [i_12] [i_11 + 2] [i_12])));
                    }
                }
            }
        }
        arr_46 [i_10] = (((((-(min(52, 8532305727563230014))))) ? ((-6946038965783714249 ? (~var_8) : -6946038965783714234)) : ((-3352954617881261088 ? (arr_39 [i_10]) : (arr_39 [i_10])))));
    }
    var_29 = (var_9 == var_6);
    var_30 = 1264961649;
    #pragma endscop
}

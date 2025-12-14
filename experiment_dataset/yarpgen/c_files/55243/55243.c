/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        arr_3 [i_0] = (+-0);
        arr_4 [i_0] = (arr_1 [i_0] [i_0]);
        var_13 = (arr_0 [i_0 + 4] [i_0 + 1]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [i_3] = (arr_1 [3] [i_1]);
                    arr_14 [i_1] [i_2] [i_3] [i_2] = 26138;
                    var_14 = (arr_10 [6] [2]);
                    var_15 = (min(var_15, (39397 + 1)));
                    arr_15 [6] = ((2182 ? 3489145931 : 805821365));
                }
            }
        }
        var_16 = ((1 ? (((((39397 >> (var_9 - 68)))) | (min((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1]))))) : var_7));
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_25 [i_4] [i_4] [i_5] [i_5] [i_5] [i_7] = ((((((-3154947647710285160 | (arr_0 [14] [i_7])) >= (-1658361705116166846 - -8058948152583153342))))));
                            arr_26 [i_6] [i_5] [i_6] [i_7] [i_7] [i_5] = ((+((-var_4 ? (((arr_19 [i_5] [i_6] [11]) + -7278)) : var_4))));
                            arr_27 [i_4] [i_4] [1] [i_7] = (min(-8080755800438802445, (arr_16 [i_4 - 1])));
                        }
                    }
                }
                arr_28 [1] [i_4] = (((arr_0 [1] [i_4 - 1]) ? ((var_8 ? (arr_0 [i_4] [i_4 - 1]) : (arr_0 [i_4] [i_4 + 1]))) : (arr_0 [i_4] [i_4 - 1])));
                arr_29 [i_4] [i_5] [i_4] = ((((((((arr_24 [i_4] [i_5] [i_4 - 2] [i_4 - 2] [i_4] [i_4 - 2]) + 2147483647)) >> 19))) ? (~-39397) : ((((((arr_24 [i_4] [i_5] [i_4] [i_4] [i_5] [i_5]) ? 1 : 1))) ? var_9 : ((min(1, (arr_24 [8] [20] [i_4] [13] [13] [i_5]))))))));

                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    var_17 = (arr_22 [i_4] [i_4] [i_5] [i_4]);
                    var_18 = (((((39397 ? 1 : 1))) % (((arr_0 [i_4] [i_4 + 1]) ? (((arr_21 [i_4] [18]) ? 35 : 268402688)) : 1))));
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_19 = (min(var_19, ((min((arr_21 [i_4] [i_9]), ((8080755800438802452 ? (min(var_2, 1)) : var_8)))))));
                    arr_36 [i_5] = (min((((min((arr_21 [i_4] [i_4]), var_3)) + (var_7 >= 3489145931))), ((((arr_20 [i_4] [0] [i_9]) | 26138)))));
                }
                arr_37 [i_5] [i_5] [1] = 1;
            }
        }
    }
    #pragma endscop
}

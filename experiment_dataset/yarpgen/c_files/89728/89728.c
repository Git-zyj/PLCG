/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_13 = (arr_9 [i_2 + 3] [i_0 - 2] [i_0 - 2] [i_0 - 1]);
                        var_14 = ((~((6640 ? (arr_9 [i_0] [i_1] [3] [i_3]) : var_1))));
                    }
                }
            }
            var_15 = (((((arr_6 [i_0]) * var_6)) | var_9));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_16 = (max(var_16, (((+(((arr_9 [i_0 + 1] [i_1] [i_4] [i_0 + 1]) ? (arr_12 [i_0] [i_0] [i_1] [i_0]) : 152)))))));
                        var_17 -= ((+(((arr_12 [i_0 + 1] [i_0 - 2] [i_1] [6]) >> (((arr_5 [i_5] [i_0] [i_0] [i_0]) + 99))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    {
                        var_18 = (((arr_15 [i_0 - 1] [i_0 + 1] [9]) * var_0));
                        arr_22 [i_7] [i_0] [i_7] = (((((arr_18 [i_0 - 2]) || 69860063)) ? var_10 : (-2246540418429668492 >= var_3)));
                        arr_23 [i_0] [i_0] [i_6] [i_6] [i_7] [1] = ((+((50420 ? (arr_8 [i_0] [i_1] [i_6]) : -2116203041))));
                        arr_24 [i_7] [i_7] [i_7] [i_0 - 2] = 15116;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                {
                    arr_29 [i_9] [i_8] [3] = ((var_1 * (arr_19 [i_0] [i_9] [i_9 - 1] [1])));
                    var_19 = (arr_14 [i_9] [i_0] [i_8] [i_8] [i_9]);
                    var_20 = (4294967295 * 480);
                    var_21 = (((arr_13 [i_0] [i_0] [i_0] [i_0 + 2]) + (arr_13 [i_0 + 1] [i_0] [i_0] [i_0 - 1])));
                }
            }
        }
        var_22 = var_4;
    }
    var_23 |= (max(((15097 ? var_3 : -36)), var_4));
    var_24 = (((!(!4225107232))));
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 21;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 21;i_11 += 1)
        {
            {
                var_25 = var_6;
                var_26 = (min((arr_33 [i_11]), var_6));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (arr_2 [i_0] [i_0]);
        var_17 = ((~(arr_2 [i_0] [i_0])));
        var_18 = var_9;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_1] [i_1] [i_1] [i_2] [i_2] = 218;
                        var_19 = var_11;
                        var_20 = 13071922198926244973;
                        var_21 = (((((~(arr_3 [i_0] [i_3 + 1] [i_3])))) ? (((arr_3 [i_1 - 2] [i_3 + 2] [i_3]) ? (arr_3 [i_1] [i_3 + 1] [i_3 - 1]) : (arr_3 [11] [i_3 + 2] [i_3]))) : ((~(arr_3 [6] [i_3 + 1] [i_3 - 2])))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_21 [i_4] = ((var_5 ? var_8 : var_3));
            var_22 &= (~var_10);
        }
        var_23 = 41366;
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_24 = (min(var_24, (((!(arr_15 [i_6]))))));
        var_25 = ((((arr_0 [i_6]) ? 0 : (-49 / 24191))) * var_10);
    }
    var_26 = (((~var_13) && var_13));
    var_27 = 9785;

    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {
                    var_28 = (((!var_3) ? var_9 : var_14));
                    arr_33 [i_7] [i_8 + 1] [i_8 + 1] [i_7] = ((~(min(var_1, (arr_18 [i_7])))));
                }
            }
        }
        var_29 -= -1314331978392790954;
        var_30 = (~var_5);
    }
    #pragma endscop
}

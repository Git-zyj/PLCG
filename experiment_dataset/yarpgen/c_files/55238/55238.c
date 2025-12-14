/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((var_1 ? var_16 : var_4))) ? var_1 : var_0)) - var_3));
    var_19 = (max(var_15, (max(((var_13 ? var_5 : var_4)), var_8))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [1] [1] [i_2] [i_2] = (-127 - 1);
                    var_20 = (min(var_20, (arr_0 [i_0])));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_21 = (max((arr_11 [i_3] [i_3]), (arr_10 [i_3])));
        var_22 = (min((max((arr_10 [i_3]), (arr_10 [i_3]))), (((!(((-127 - 1) < (arr_10 [i_3]))))))));

        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            arr_15 [i_3] [i_3] [i_3] = max((max((!-106), ((13709948074970354939 ? -106 : var_12)))), ((max((arr_13 [i_3 - 1]), (arr_13 [i_3 - 1])))));
            var_23 = var_3;
            arr_16 [i_3] = ((+(((((arr_13 [i_4 - 1]) ^ 1)) & (arr_14 [i_3 - 1] [i_4 - 1] [i_4])))));
        }
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        arr_21 [i_5] [i_5] = ((90 * (-127 - 1)));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                {
                    var_24 = (max(var_24, (arr_24 [i_5] [i_6] [2])));
                    arr_27 [i_5] [1] [i_5] = var_15;
                    arr_28 [i_5] [9] = (max((!37667), 63284));
                }
            }
        }
        var_25 = -1055909706;
        var_26 = ((88 ? 1 : 12));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_27 = var_1;
        var_28 += ((!((min(var_16, (((arr_24 [i_8] [i_8] [6]) ? var_14 : var_5)))))));
    }
    var_29 = ((-112 ? -91 : 4162937857932118922));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(!-var_1)));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [13] = ((~((var_1 ? var_10 : var_3))));
                    var_12 = ((-(!26417)));
                    arr_8 [i_1] [i_1] [i_2] [i_1] = ((-((var_6 ? (~var_9) : ((var_8 ? var_5 : var_0))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        arr_18 [i_0] [4] [i_3] [i_4] [i_0] [i_5] = (!var_5);
                        arr_19 [i_5] [i_4] [i_3 - 2] [i_5] = -var_6;
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_13 = ((!(!-var_9)));
        var_14 &= var_10;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_15 |= ((!(~var_5)));
        arr_27 [i_7] = ((var_3 ? var_6 : (!var_2)));
        var_16 = (~var_4);
        var_17 = var_1;
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                {
                    var_18 = (((((var_5 ? 6985 : var_0))) ? var_10 : var_2));
                    var_19 = (((~var_9) ? ((-((var_5 ? var_9 : var_6)))) : (!var_2)));
                    arr_35 [i_9] [i_10] = ((~(!32767)));
                    arr_36 [i_9] [i_8] = -var_8;
                }
            }
        }
    }
    #pragma endscop
}

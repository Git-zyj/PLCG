/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(var_4, var_11))) ? 1 : var_6));
    var_14 = ((((~var_12) ? var_6 : (!var_5))) != var_0);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = var_11;
                    var_16 = ((!(!35189521)));
                    arr_9 [1] [1] [i_0] [1] = var_10;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    {
                        var_17 = (((arr_8 [i_0] [i_3] [i_0]) >= var_5));
                        var_18 = ((!((((arr_3 [i_0] [i_3]) ? 0 : var_10)))));
                        var_19 = var_4;
                        var_20 = (arr_6 [i_0] [i_0] [i_4] [i_3]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        var_21 = var_8;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    var_22 = (((var_7 ? var_10 : var_12)) < var_6);
                    arr_26 [i_8] [i_8] [i_6] = (!(arr_2 [i_6] [i_6 - 1] [i_8]));
                    var_23 = (max(var_23, 357831272939422981));
                    arr_27 [i_8] [i_7] [i_8] = -var_6;
                }
            }
        }
    }
    #pragma endscop
}

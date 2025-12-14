/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_10 = var_5;
            var_11 = ((var_9 ? ((var_1 ? var_4 : var_5)) : (~var_6)));
        }
        for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_12 = var_7;

            for (int i_3 = 3; i_3 < 11;i_3 += 1)
            {
                arr_13 [7] [i_2] [i_3 + 4] = var_3;
                var_13 ^= ((+((var_6 ? (~var_9) : var_5))));
            }
            var_14 = max((min(((var_1 ? var_2 : var_9)), -var_0)), ((max(var_6, (~60)))));
        }
        for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
        {
            arr_16 [i_4 + 2] [8] [8] = ((((((~var_4) ? ((var_0 ? var_3 : var_5)) : (~var_7)))) ? var_7 : var_7));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_15 = (min((((var_2 ? -var_6 : var_8))), (((var_8 ? var_2 : var_9)))));
                            var_16 = var_8;
                            var_17 = ((-(((max(var_2, var_3))))));
                            var_18 -= ((var_2 ? (max((~var_6), ((var_6 ? var_9 : var_3)))) : var_1));
                        }
                        var_19 = var_1;
                    }
                }
            }
            arr_24 [i_0] = (min((~var_8), -var_7));
        }
        var_20 ^= ((((max(((var_3 ? var_8 : var_0)), var_5))) ? ((var_3 ? ((var_8 ? var_5 : var_6)) : ((var_6 ? var_7 : var_6)))) : var_3));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 14;i_8 += 1)
    {
        var_21 = (((~var_2) ? ((var_9 ? var_5 : var_6)) : ((var_7 ? var_1 : var_0))));
        arr_27 [i_8] [i_8] = var_6;
        var_22 &= (((var_4 ? var_9 : var_0)));
        var_23 = ((~(~16813)));
    }
    var_24 -= ((66 ? 16806 : 72));
    #pragma endscop
}

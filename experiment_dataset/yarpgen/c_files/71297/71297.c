/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 7;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            var_19 = ((((((~var_0) ? (~306901073) : (max(var_2, var_16))))) | ((-2 ? var_1 : 13573217449832088069))));
            arr_5 [i_0] [i_0] = ((((-(arr_2 [i_0 + 3] [i_0 + 3] [i_1]))) / var_15));
        }
        var_20 *= ((-(var_18 & var_17)));
        var_21 = var_17;
        arr_6 [i_0 - 1] = (!22);
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 7;i_2 += 1) /* same iter space */
    {
        var_22 += 2216913110;
        var_23 = (min(var_23, ((((arr_4 [i_2 - 1]) - (arr_4 [i_2 + 1]))))));
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                {
                    var_24 = (((var_18 - var_3) * (var_9 & var_3)));

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_25 = ((((max(1, 45469))) ? (((arr_16 [i_3 + 2]) & (arr_16 [i_3 + 4]))) : ((var_9 ? var_17 : (arr_16 [i_3 + 3])))));
                        var_26 = (min((((~var_0) >> (var_9 - 4273375184))), (((arr_11 [i_3 + 1]) - (var_0 + var_3)))));
                        arr_21 [i_3] [i_4] [i_6] |= (~-30722);
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        arr_24 [i_4] [i_4] [i_4] [i_4] [i_3] [i_4] &= ((-var_14 << (var_5 + 13731)));
                        var_27 = 4294967294;
                    }
                }
            }
        }
    }
    #pragma endscop
}

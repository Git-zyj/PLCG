/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    var_20 += var_7;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                arr_10 [i_2 - 1] [i_0] [i_0] = ((((max((arr_9 [i_2 + 2]), var_14))) || ((max(1, 349358826)))));
                var_21 = (131071 == 1);
            }
            var_22 = (arr_5 [i_0 - 2] [i_0 - 2]);
            arr_11 [i_0] [i_0] = ((((max((min(var_2, var_0)), (0 / var_1)))) ? -1 : ((((arr_6 [i_0 + 1] [i_0 - 1]) || (!0))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    {
                        arr_18 [i_3] [i_3] = ((~((min((arr_12 [i_4 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 1]), -88)))));
                        arr_19 [i_3] = ((-(arr_13 [i_0] [i_3] [i_3] [i_4 - 1])));
                        arr_20 [i_3] [i_3] [i_4 - 1] = (((min(-0, (arr_9 [i_0 - 1]))) + (((1 ? (arr_6 [i_0] [i_1]) : var_0)))));
                        arr_21 [i_3] [i_3] [i_3] = (((((arr_14 [i_3] [i_3]) ? (arr_3 [i_1]) : ((var_5 ? var_2 : 1)))) < -var_16));
                        var_23 = (((((0 ? ((var_8 ? var_7 : var_11)) : (arr_8 [i_0] [i_0] [i_0])))) >= var_15));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_24 = ((-var_7 != ((var_4 ? 88 : var_0))));
            var_25 = ((-(arr_17 [i_0 - 1] [i_0] [i_0 - 2] [i_0 - 2] [i_0])));
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        {
                            arr_36 [i_9] [i_8] [i_7] [i_0] [i_6] [i_0] |= (arr_26 [i_0]);
                            var_26 *= (((min(-72, 31690))));
                            var_27 += (max(((-32121 % (~1))), (arr_27 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_7 - 1])));
                        }
                    }
                }
            }
            var_28 = (max(var_28, ((max((arr_14 [i_0 - 1] [10]), (arr_14 [i_0] [1]))))));
        }
        arr_37 [i_0] = var_4;
        var_29 = (arr_16 [6] [i_0] [i_0] [i_0 - 2] [6]);
        var_30 ^= ((((max(12757646740157692776, ((min(var_7, (arr_8 [i_0] [i_0] [i_0]))))))) ? (max((((arr_30 [i_0] [i_0] [i_0 - 2] [i_0] [i_0]) ? 1 : var_17)), (!1))) : (min((((arr_12 [i_0] [i_0] [i_0] [i_0]) ? var_14 : var_9)), var_4))));
        var_31 -= var_0;
    }
    var_32 &= var_3;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_2] = (arr_3 [i_0]);
                    var_20 = (max(var_20, var_7));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                {
                    var_21 ^= 79;
                    var_22 *= (arr_8 [16]);
                }
                for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                {
                    var_23 ^= (((20346 <= 20346) & (((arr_10 [i_0] [2] [i_4]) & (arr_10 [i_4] [i_1] [i_0])))));
                    var_24 = 44;
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_25 = 3868032510;

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_26 ^= var_13;
                            var_27 = var_16;
                        }
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                    {
                        var_28 = (max(var_28, (~1)));
                        arr_25 [i_5] [i_5] [i_5] [i_1] [13] [i_5] = (arr_13 [i_8] [i_8]);
                    }
                    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                    {

                        for (int i_10 = 2; i_10 < 23;i_10 += 1)
                        {
                            arr_31 [20] [i_1] [20] [i_9] [i_10] [20] [i_5] = ((((60569 <= (arr_3 [i_5]))) ? ((var_15 ? var_12 : (arr_5 [i_0]))) : ((((arr_10 [i_5] [i_5] [i_0]) ? (arr_15 [i_5] [i_5]) : 136)))));
                            var_29 = (!43);
                            arr_32 [i_0] [i_0] [i_0] [i_0] [23] [i_0] [i_5] = (-6132355022796206467 & 28);
                        }
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            arr_35 [i_5] [21] [i_5] = var_16;
                            var_30 ^= (((arr_1 [i_11]) ? (((arr_16 [6] [i_9] [i_9]) ? (arr_17 [i_0]) : var_3)) : -117));
                        }
                        arr_36 [i_5] [i_1] [i_5] [i_9] [i_1] [i_1] = (var_17 + -15528);
                        var_31 = (((((1 ? (arr_11 [i_5] [i_5] [i_9]) : (arr_28 [i_1] [i_5] [i_1] [i_1] [i_0])))) ? 1546999 : -var_1));
                        var_32 = var_12;
                    }
                    arr_37 [i_5] [i_5] = (((((var_5 ? (arr_7 [i_5]) : -35))) ? -1 : 1917742374144802192));
                    var_33 = (min(var_33, (((var_12 >> (var_19 - 779062384))))));
                    var_34 = ((-43 ? 2669 : 4294967295));
                }
                var_35 = -var_18;
            }
        }
    }
    var_36 = (max(var_36, ((var_16 ? var_7 : ((var_10 ? var_6 : (!14046887931314235104)))))));
    #pragma endscop
}

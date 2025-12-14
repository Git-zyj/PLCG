/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = (~var_11);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = var_13;
                    arr_7 [i_0] [i_0] [i_0] = (arr_4 [i_0] [i_1] [i_1]);
                    var_18 = -32762;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = (((max(var_15, (arr_12 [i_1 - 4] [i_1 - 4] [i_2 - 1] [i_3 - 1] [i_4 - 1])))) | 2266463739);
                                var_20 = (max(var_20, var_15));
                                var_21 = (arr_8 [i_0] [i_1] [i_2] [6] [i_3] [i_4]);
                                var_22 = var_1;
                                var_23 = (arr_12 [i_0] [i_3] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
        var_24 = ((-var_4 ? -var_12 : ((2028503557 ^ (arr_4 [i_0] [0] [i_0])))));
        var_25 = 228;
        var_26 = (((min((((1542495282 ? 59560 : 2028503557))), (min((arr_3 [i_0] [i_0] [i_0]), var_11)))) > ((((~var_3) ? 22 : ((6000 ? 1 : 4294967274)))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_27 = ((15554 ? 17 : var_11));

        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_28 = var_14;
            var_29 = (((arr_17 [i_5]) ? var_9 : 5976));
            var_30 = 3064620708471764238;
            var_31 = ((var_9 ? (arr_13 [i_6]) : var_12));
        }
    }
    var_32 = (min(24779, 65518));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 17;i_9 += 1)
            {
                {
                    var_33 = (arr_20 [i_9]);
                    var_34 = var_0;
                }
            }
        }
    }
    #pragma endscop
}

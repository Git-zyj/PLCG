/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = ((!(arr_3 [i_0 - 1])));
            var_19 = 15007409881870239181;
            var_20 = ((!((!(!2)))));

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                arr_7 [i_2] [i_1 + 1] [i_1] [i_1 - 2] = (arr_2 [i_2] [i_1] [i_0]);
                var_21 = ((((((arr_0 [i_0 - 1] [i_1 + 1]) & (~254)))) || -29095));
            }
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_22 = arr_8 [i_0] [i_1 + 2] [i_3];
                var_23 = 16;
                arr_11 [i_0] [i_3] [i_0] = 254;
            }
        }
        /* vectorizable */
        for (int i_4 = 3; i_4 < 23;i_4 += 1)
        {
            var_24 = (1 + 2);
            var_25 = (arr_10 [i_0] [i_0]);
            var_26 = (((arr_3 [i_4 - 1]) == (arr_5 [i_0 + 1])));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 23;i_7 += 1)
                    {
                        {
                            arr_23 [i_5] [i_4] = ((244 - (arr_0 [i_4 - 1] [i_4 - 1])));
                            var_27 = ((!(arr_16 [i_7] [i_7] [i_7 - 1] [i_7 - 2])));
                            var_28 = (21 > 1);
                        }
                    }
                }
            }
            arr_24 [i_4] = -480;
        }
        arr_25 [i_0] = 12;
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 22;i_8 += 1)
    {
        arr_28 [i_8 + 1] = (arr_12 [8] [i_8 + 1]);
        var_29 = ((!(arr_1 [i_8 + 1])));
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        var_30 = (~var_1);
        var_31 = (min((((!((((arr_17 [i_9] [14]) | (arr_17 [i_9] [18]))))))), (arr_19 [14] [i_9] [i_9] [8] [i_9] [i_9])));
        var_32 = ((!(!25)));
    }
    #pragma endscop
}

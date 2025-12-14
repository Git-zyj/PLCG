/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= ((-(arr_0 [i_0])));
        var_12 *= (((arr_1 [i_0]) | (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_2] |= (arr_3 [i_1]);
                    var_13 = var_4;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_14 = (arr_10 [i_3] [i_3]);

        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            var_15 = (~3898601314);
            var_16 += (min((((((4048238514 ? var_3 : (arr_10 [i_3] [i_4 + 2])))) & ((var_3 ? 1 : 4048238501)))), (((max((arr_13 [i_3]), (arr_14 [i_4 - 1])))))));
        }
        for (int i_5 = 4; i_5 < 19;i_5 += 1)
        {
            var_17 &= -140351517;
            var_18 = var_9;
            var_19 = (max(var_19, 140351516));

            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {

                /* vectorizable */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    var_20 = (~-var_2);
                    var_21 = (arr_10 [i_7] [i_5 + 1]);
                    var_22 = (~var_5);
                    arr_21 [i_3] [i_5] [i_6] [i_3] = -140351526;
                    var_23 = (arr_11 [i_3] [i_5]);
                }
                var_24 = 4048238532;
                var_25 = (min(var_25, (min((var_4 - var_0), (var_7 * var_10)))));
                arr_22 [i_3] [i_3] [i_6] |= var_5;
                var_26 += (min((arr_18 [i_6]), ((-(arr_17 [0] [i_5 - 2] [i_5] [i_5 - 3])))));
            }
        }
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
    {
        arr_25 [i_8] = -4048238514;
        arr_26 [i_8] = 1088116016;
        var_27 = ((140351526 ? 52165 : 1));
        var_28 = (min(var_28, (-140351517 < -140351519)));
    }
    var_29 = (((((min(var_8, var_4)))) | (max((min(var_5, 140351516)), var_6))));
    var_30 = ((var_3 ? ((41123 ? 63 : var_3)) : ((var_0 ? var_7 : -740354455))));
    var_31 |= (var_2 || ((max(var_8, (max(52165, 4048238514))))));
    #pragma endscop
}

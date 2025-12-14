/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (arr_0 [i_0]);

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    var_17 = min((arr_6 [i_0] [i_2] [i_2 - 1] [i_2]), (arr_6 [i_0] [i_0] [i_1] [i_0]));
                    var_18 &= (524439117 <= 4);
                }
                for (int i_3 = 4; i_3 < 12;i_3 += 1)
                {
                    var_19 = 524439115;
                    var_20 = ((((~(~var_6))) - (((!(((524439115 ? 18446744073709551612 : 199576987))))))));
                    var_21 = (((arr_7 [i_3] [i_3 - 1] [i_3 + 2] [i_3]) || (arr_7 [i_1] [i_3 - 1] [i_3 + 2] [i_3 - 4])));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {

                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        var_22 = 524439117;
                        var_23 = 94688223847652885;

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_18 [i_5] [i_5] = (~var_7);
                            var_24 &= (((((arr_0 [i_0]) ? (arr_17 [i_0] [i_0] [7] [i_0] [i_6] [i_5] [i_4]) : (arr_17 [i_0] [i_1] [i_1] [7] [i_5 + 2] [i_5] [8]))) + ((((arr_3 [i_5]) ? var_6 : var_14)))));
                            arr_19 [i_0] [i_4] [i_4] [i_0] [i_6] &= (arr_17 [i_5 - 2] [i_1] [i_4] [i_5] [i_5 - 2] [i_5] [i_1]);
                            var_25 = (arr_7 [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5 - 2]);
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            arr_22 [i_7] [i_5] [i_4] [7] [i_1] [i_0] = ((var_4 ? ((-(((arr_20 [i_0] [i_4] [i_4] [7] [i_7] [i_1] [i_7]) ? -740354043 : var_13)))) : (~var_6)));
                            var_26 = ((((max((arr_4 [i_5 - 2] [i_5 + 1] [i_5 - 2] [i_0]), var_15))) ? ((((arr_5 [i_7] [i_1]) ? 803437782 : ((var_9 % (arr_4 [i_0] [13] [i_5 - 2] [i_7])))))) : (((max((arr_21 [i_7] [13] [i_4] [i_0] [i_0]), 8151694223250842348)) - var_7))));
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_27 = ((!(arr_21 [11] [11] [i_4] [11] [i_4])));
                            var_28 = var_0;
                            var_29 = ((-964405354 ? -199576987 : -1706587606));
                        }
                        var_30 = (max(var_30, ((max(18352055849861898732, (arr_6 [i_5 + 1] [i_5 + 2] [i_5 + 2] [i_5 - 2]))))));
                    }
                    var_31 -= 1555999458;
                    var_32 = (((arr_0 [i_0]) ? (((arr_0 [i_4]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((arr_0 [i_1]) & (arr_0 [i_0])))));
                }
            }
        }
    }
    var_33 += max(1653420255, (((max(var_11, var_8)) % var_2)));
    #pragma endscop
}

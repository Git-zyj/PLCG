/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min((max(-2369312048526264742, 480)), (!var_0)))) ? ((var_7 - ((-78 ? 6788693692476375206 : var_15)))) : ((((~var_14) ? 186 : var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        arr_11 [i_1] [i_1] [i_1] = ((((max(var_9, -1595769118))) ? 0 : (((arr_2 [i_0 - 1]) ? (arr_7 [i_1] [i_0 - 1]) : 65330))));
                        var_18 = (~(!255));
                    }
                    var_19 = (max(3046468838, var_6));
                    var_20 = ((1366374516 ? (((var_16 < 9086) ? (arr_5 [i_0 + 2] [2] [14] [i_0 + 1]) : ((var_12 ? var_12 : (arr_1 [6]))))) : (((max(6788693692476375220, 252)) >> (-1 + 54)))));
                    var_21 = (max(var_21, ((max((max((((arr_7 [i_2] [i_2]) ? 65354 : 4294967295)), var_16)), (((!(arr_1 [i_0 + 1])))))))));
                }
            }
        }
    }
    var_22 = ((var_15 ? ((((((var_10 ? 1366374516 : 78))) && (((var_1 ? 26017 : 13896876286068885343)))))) : var_4));
    #pragma endscop
}

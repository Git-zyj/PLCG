/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (~3970642646);
        arr_3 [i_0] [5] = var_15;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = (max((((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : (arr_0 [i_0]))), (((!((((arr_1 [i_0]) ? (arr_5 [8] [i_0]) : var_5))))))));
            var_19 = (arr_0 [i_0]);

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_20 = (((26567 % 165) ? 3970642646 : 0));
                arr_11 [i_0] [12] |= ((((min(((57524 >> (((arr_10 [i_0] [8] [i_0] [i_0]) + 963063397)))), var_8))) ? ((~(min((arr_8 [i_2] [i_0] [i_0]), (arr_10 [i_2] [i_1] [i_0] [4]))))) : (arr_9 [i_2] [i_0])));
                arr_12 [i_0] = ((((((arr_0 [i_0]) ? (arr_8 [i_0] [i_1] [i_2]) : (((!(arr_8 [i_0] [1] [i_0]))))))) ? -10332 : (max((arr_1 [i_1]), ((min((arr_10 [1] [i_1] [1] [i_0]), 13)))))));
            }
        }
    }
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        var_21 = (((((15945 ? ((-75 ? -24 : -8308317460803175935)) : 1180951968))) ? ((min(1516168153, (65535 | 35167192219648)))) : 9279410785249533606));
        arr_16 [i_3] [i_3 + 1] &= ((!(arr_15 [17] [i_3])));
        var_22 = (~var_11);
    }
    var_23 |= var_11;
    var_24 = (((((var_14 ? (56 || var_3) : (-9223372036854775806 / var_15)))) ? ((((max(var_5, var_12))) ? ((var_13 ? var_2 : var_12)) : ((0 ? var_18 : -18712)))) : var_4));
    var_25 = (((55017 & var_1) ? var_14 : var_12));
    #pragma endscop
}

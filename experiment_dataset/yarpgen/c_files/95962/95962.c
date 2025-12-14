/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((((((-7670292511131913542 ? var_2 : 14))) ? var_8 : 29)), var_4));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_12 = (arr_1 [i_0]);
        var_13 = 14;

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                var_14 = (~7670292511131913573);
                var_15 = (max(var_15, 52665));
                var_16 = ((56961 ? -7670292511131913574 : 7670292511131913559));
                arr_8 [i_1] [i_1] [i_2] = (min((((-(arr_7 [17] [i_0 - 1])))), (((arr_3 [i_2 + 1]) ? (arr_3 [i_2 - 1]) : (arr_3 [i_2 - 1])))));
                var_17 = (arr_2 [i_2 - 1]);
            }
            var_18 = (~((min((arr_4 [i_1] [i_0] [12]), 56961))));

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                arr_11 [i_1] [10] [i_3] [10] = arr_9 [i_0 + 2] [i_0 + 2] [i_3];
                var_19 = (max((((arr_5 [i_0 + 1] [i_0 - 1]) ? (arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 1]) : 221)), (((arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 1]) ? (arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 1]) : 56979))));
                var_20 = (min(var_20, (arr_9 [i_0] [i_1] [i_3])));
            }
            var_21 = 0;
            var_22 = (min(8575, ((-2091489567 ? -7670292511131913574 : 180))));
        }
        arr_12 [i_0] = 34;
    }
    var_23 = (min(var_23, var_5));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_2;
    var_12 += 65506;
    var_13 = ((max(((max(var_8, var_10))), var_2)) & (((((var_5 ? var_9 : var_1))))));

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_14 = var_7;

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            var_15 = (max(var_15, (((((min((arr_3 [i_1 - 2] [i_1] [i_1]), (arr_3 [i_1 + 2] [i_1] [i_0 - 3])))) && ((((arr_1 [i_1 + 1]) + (arr_0 [i_0])))))))));
            var_16 = (max(var_16, (arr_3 [i_0] [i_1] [i_0])));
            var_17 = (max(var_0, (arr_3 [17] [13] [i_0])));
            arr_4 [i_0] [i_1] = (((arr_2 [i_1 - 2] [i_1 - 2]) << (((arr_2 [i_0] [i_1 + 2]) ? var_7 : ((var_7 ^ (arr_1 [i_1])))))));
            arr_5 [1] [i_1] [3] = (arr_2 [i_0] [i_1]);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_18 = (min(var_18, (arr_1 [i_0 - 2])));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_19 = (max(var_19, -3));
                            var_20 *= ((((max(var_3, (arr_2 [i_5] [i_0])))) ? (arr_3 [i_0] [i_3] [i_4]) : (arr_12 [i_3] [i_0] [0] [i_4 + 3] [i_2] [i_2])));
                            var_21 = (arr_13 [i_5] [i_4] [i_2]);
                        }
                    }
                }
            }
            var_22 = (max((min((!4), 65506)), var_4));
        }
        for (int i_6 = 2; i_6 < 23;i_6 += 1)
        {
            var_23 = (max((arr_2 [i_0 - 3] [i_0 - 1]), (arr_2 [i_0] [i_0 - 3])));
            var_24 -= (min((max(22056, (max(1, 3)))), ((max((max((arr_11 [18]), (arr_2 [i_0] [i_6]))), ((max(0, 1))))))));
        }
    }
    #pragma endscop
}

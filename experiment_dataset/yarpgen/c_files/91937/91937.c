/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (var_14 | var_15)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 ^= var_1;

                for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        var_21 = (max(-1, -8694));
                        var_22 = (max(var_22, (arr_1 [i_0 + 3] [i_3 + 2])));
                        var_23 *= (arr_2 [i_0 + 2]);
                        var_24 *= (min((arr_10 [i_2] [i_1] [0] [i_3 + 1]), (var_13 + var_10)));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_25 = var_9;
                        var_26 = var_0;
                    }
                    var_27 = (min((max(var_4, var_7)), (arr_13 [i_0 + 3] [i_1] [i_2] [i_0 - 1] [i_2])));
                    var_28 += (arr_12 [i_0] [17] [17] [i_0 + 3] [i_0] [i_0 - 1]);
                    arr_15 [i_0] [i_0] [i_0] [i_0] = (min((max((arr_5 [i_0] [i_0] [i_0 + 3]), (((arr_11 [i_0 + 1] [7] [2] [i_1] [i_2] [i_2]) / var_18)))), var_18));
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    arr_18 [i_0 + 1] [i_5] [i_5] = var_12;
                    var_29 &= (min(var_10, ((max(((var_16 >> (((arr_4 [i_0 - 1] [11] [i_0]) + 8754433387944898147)))), (arr_6 [i_5] [i_1] [i_0 + 2]))))));
                    var_30 = (min(var_30, ((max((min((arr_13 [i_0] [16] [i_5] [i_5] [16]), (arr_0 [i_1]))), ((min((arr_7 [i_0 + 2] [i_0 + 1] [i_0 + 2]), (arr_7 [i_0 + 2] [i_0 + 1] [i_0 + 2])))))))));
                }
            }
        }
    }
    var_31 = (max((min(var_9, var_17)), var_16));
    var_32 = (min(var_32, var_14));
    var_33 = (var_5 | var_10);
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) ? (((arr_0 [i_0] [i_0]) ? 6595066047128920191 : var_4)) : var_4));
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
        var_15 = ((((((var_1 ? (arr_1 [i_0]) : var_7))) ? (arr_1 [i_0]) : 2147483647)));
        var_16 = (min(var_16, (((-((32256 ? ((((arr_1 [6]) == 13636206207634272782))) : -583624576)))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_17 = (min(((~((33585 ? (arr_12 [20] [i_2] [i_2] [0]) : 4294967295)))), (max((((var_8 ? var_12 : var_1))), (arr_12 [i_1] [i_2 + 1] [i_2] [i_5])))));
                                var_18 = (((arr_21 [i_2] [i_2] [i_2] [i_2 - 2] [i_4 + 1]) && (((1 ? 3 : 926185621)))));
                            }
                        }
                    }
                    var_19 = (min(var_19, (((max(79, var_6))))));
                    var_20 = var_6;
                    var_21 = ((var_3 ? 56 : (!11851678026580631441)));
                }
            }
        }
    }
    var_22 = (((((((var_9 ? 993 : 0))) ? var_9 : (((16 ? 78 : 249))))) < ((min(-156, var_10)))));
    #pragma endscop
}

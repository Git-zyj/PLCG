/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_11 ? var_7 : ((min(var_9, (min(9223372036854775797, 0)))))));
    var_13 = ((((max((max(var_1, 29124)), var_6))) ? var_3 : (min(var_4, ((var_9 ? var_0 : var_9))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = max(4294967295, ((((((arr_0 [i_0] [i_0]) ? var_1 : 4294967295))) ? (min(var_5, (arr_0 [i_0] [i_0]))) : (arr_1 [i_0] [i_0]))));
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    {
                        var_14 = var_8;
                        var_15 = (min(var_11, ((min((arr_7 [i_2 - 2] [i_1]), 117)))));

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            arr_16 [i_5] [i_1] [i_3] [i_1] [i_1] = (((arr_15 [i_1]) ? (((var_9 && (((2147483644 ? var_0 : (arr_6 [i_1]))))))) : 32748));
                            var_16 = (min(var_16, ((min((arr_8 [i_1] [i_2] [i_3]), (arr_13 [i_1] [18] [i_3] [i_4] [i_4]))))));
                            var_17 -= (((arr_12 [i_3 + 1] [i_5]) == ((((arr_0 [21] [i_3]) <= var_3)))));
                        }
                        var_18 = (max((((((var_3 ? (arr_1 [i_1] [10]) : (arr_11 [6] [6] [i_3])))) ? ((min(9223372036854775807, var_11))) : (var_0 ^ 0))), 5880249592224722046));
                        var_19 = 125;
                    }
                }
            }
        }
        var_20 = (min((((arr_0 [i_1] [i_1]) ? (arr_0 [i_1] [i_1]) : (arr_0 [17] [i_1]))), 2147483644));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    var_20 = (13409 & 52116);

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_21 = (((min(((var_10 | (-127 - 1))), (arr_0 [i_0] [i_0 - 1]))) | ((~(arr_1 [i_0])))));
        var_22 = (((((((min(107, (arr_0 [i_0] [i_0])))) ? (((arr_0 [i_0] [i_0 - 2]) ? (arr_0 [i_0] [i_0 + 1]) : (arr_0 [i_0] [i_0]))) : (max(var_8, -1676422784))))) ? ((-((max(13393, (arr_0 [i_0] [i_0])))))) : -7279991396729248655));
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        var_23 = (((~(arr_1 [i_0]))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_24 = ((max(-var_3, (arr_13 [i_1] [i_1] [i_1] [i_2 - 1] [i_2 + 1] [i_3 - 1]))));
                            var_25 = (min((max(((min((-127 - 1), (arr_13 [i_3 + 3] [4] [i_3 + 3] [i_3 + 2] [i_3 + 1] [i_3 + 3])))), (((arr_5 [9]) ? 13409 : var_14)))), ((max(var_18, (arr_13 [i_2 - 1] [i_2 - 1] [i_3] [i_4] [6] [i_2 - 1]))))));
                        }
                    }
                }
                var_26 = (max(var_26, ((-((max(199, (max(16411, 52119)))))))));
                var_27 = (((max((arr_0 [i_2 - 1] [i_2 - 1]), (arr_0 [i_2 + 1] [i_2 - 1])))) ? ((((arr_8 [i_2] [i_2 + 1] [i_2]) && -89))) : ((-(arr_13 [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 1]))));
                arr_14 [i_2] = ((96 ? 10679 : 0));
            }
        }
    }
    var_28 = var_8;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_6, (((min(var_14, var_4))))));
    var_21 = (min(((max(((min(232, var_15))), (var_10 % var_14)))), (min(((var_12 ? 10909720946425759293 : -126)), (var_9 > var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_22 = max((((((max(10909720946425759289, (arr_4 [i_0 + 3] [i_0])))) ? ((min((arr_2 [i_0]), var_17))) : -1700962736))), (min(((((arr_4 [i_0] [i_0]) ? (arr_1 [i_0]) : var_7))), 7537023127283792329)));
                var_23 = (max(((min(((var_13 - (arr_3 [0] [i_0]))), (arr_4 [i_0] [i_0])))), (min((max(10909720946425759276, 5611253200640006766)), var_0))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_24 ^= min(((var_19 ? (arr_12 [i_4] [i_4 - 2] [i_2 + 1] [7] [i_0 + 3] [i_0]) : 9574766975050666451)), (min(7537023127283792340, 63)));
                                arr_13 [i_0] = (min(((min((arr_0 [i_1] [i_2 - 1]), (-9223372036854775807 - 1)))), ((min((arr_9 [i_0] [i_0 + 3] [i_0]), (arr_9 [i_0] [i_0 + 3] [i_0]))))));
                            }
                        }
                    }
                }
                var_25 = (((((min(8871977098658885164, 7537023127283792323)))) ? ((-(max((arr_2 [i_0]), 7654712848612430013)))) : (min((arr_3 [i_0] [i_0]), (min((arr_4 [i_0] [i_0]), 95))))));
                arr_14 [i_0 + 1] [i_0] [i_0] = (arr_7 [15] [8] [i_0]);
            }
        }
    }
    #pragma endscop
}

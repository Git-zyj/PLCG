/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                var_10 = (min(var_10, ((min((((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : ((var_9 ? (arr_2 [i_0]) : (-2147483647 - 1))))), ((max((arr_3 [i_1 - 4] [i_0]), (arr_5 [i_1 - 4] [i_1 - 1] [i_0])))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 17;i_4 += 1)
                            {
                                var_11 = (((arr_9 [i_1] [i_1 - 2] [i_2] [i_2]) ? 21 : 39));
                                var_12 = var_2;
                            }
                            for (int i_5 = 1; i_5 < 14;i_5 += 1)
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = (var_0 > 1607618148);
                                var_13 -= var_6;
                                arr_19 [i_5] [11] [i_1 - 4] = (-(arr_6 [i_1] [i_2] [i_1] [i_5]));
                            }
                            var_14 = ((-(max((arr_11 [1] [1] [1] [i_1 + 1]), -22))));
                            var_15 = (max(var_15, (arr_1 [i_3])));
                            var_16 = ((((((-4 + 9223372036854775807) << (((arr_15 [i_1 - 2] [i_0] [i_2] [i_3] [i_2]) - 1138850951))))) ? ((((((17977110087182853980 ? -41 : 1))) ? 1607618145 : ((18446744073709551604 ? 940027805 : 1))))) : (max((arr_3 [i_0] [i_3]), ((227153125 << (940027801 - 940027793)))))));
                            arr_20 [i_1] [i_1] [i_0] = (max(var_7, (((arr_11 [i_0] [i_1 - 2] [i_3] [i_3]) ? (arr_11 [i_0] [i_1 - 3] [i_2] [i_3]) : (arr_13 [i_3] [i_2] [i_1] [i_0])))));
                        }
                    }
                }
                var_17 = (61681613 ^ 25);
                var_18 = 0;
            }
        }
    }
    var_19 = (((((((var_6 ? var_7 : var_5))) || ((max(var_4, var_6))))) ? -1 : (940027820 ^ var_5)));
    var_20 = var_9;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_9 [i_1] [i_0] [i_0] = (min(((((arr_7 [i_2] [i_1] [i_2]) ? -9223372036854775798 : 188))), (max((arr_1 [i_0]), 17071826781789035256))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = (~1196443015);
                                arr_15 [i_2] [i_1] [i_2] [10] [i_1] [i_2] |= 188;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_21 = (min(var_21, (arr_19 [i_0] [12] [i_1 + 4] [2] [i_6])));
                            var_22 = (max(var_22, var_11));
                            var_23 = (min(var_23, (((((min(14, (arr_18 [i_0] [i_1 + 2] [i_5] [i_6])))) ? (((((1 ? (arr_0 [i_5]) : (arr_21 [i_0] [i_1] [i_5] [1])))) / (min(17071826781789035253, (arr_11 [i_0] [i_6] [i_5] [i_1 + 3]))))) : ((max((arr_5 [2] [i_1 - 3]), ((237 & (arr_18 [i_0] [i_1] [i_0] [i_6])))))))))));
                            var_24 = (min(var_24, (((-(((~var_3) + 188)))))));
                        }
                    }
                }
                var_25 = (min((min(60875, 0)), (((!(arr_20 [i_1] [i_1 + 3] [i_1]))))));
            }
        }
    }
    var_26 = ((((min((1823076920 < 1), (1374917291920516376 & var_16)))) ? ((((((~var_6) + 2147483647)) >> (((4655 | var_12) - 5029))))) : ((((min(var_14, -9223372036854775788))) * (((-32767 - 1) ^ 18446744073709551608))))));
    var_27 = (min(var_27, ((((max((46929 / 17071826781789035263), ((min(49617, var_10))))) * -17179869183)))));
    #pragma endscop
}

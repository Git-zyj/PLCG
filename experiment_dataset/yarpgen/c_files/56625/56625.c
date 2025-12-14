/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((max((var_9 << var_14), var_9)) > (min((((var_6 + 2147483647) << (158 - 158))), (var_12 <= var_5)))));
    var_19 = (min((min((15427348 <= var_8), -2916518119)), var_4));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 = ((!((var_8 >= (max(48403, var_8))))));
                                var_21 = min((((arr_7 [i_0 - 1] [i_0 - 1]) ? 18242161272645207899 : (arr_7 [i_1] [i_2]))), 15427342);
                                var_22 += ((-19 * (((!var_0) | (arr_10 [i_0 - 1] [i_1] [i_2] [8] [i_4])))));
                                var_23 *= ((((-((15427337 + (arr_11 [6] [i_0] [12] [i_3] [i_4] [i_2] [i_3 - 1]))))) & ((max(((1 <= (arr_5 [i_1] [i_3 + 3] [i_4]))), (((arr_2 [i_4] [i_3]) || var_10)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_21 [i_0 - 1] [i_1] [i_2] [i_1] [i_6] [i_1] [i_6] = (arr_8 [i_0] [i_1] [6] [17]);
                                arr_22 [i_5] [i_1] = (max((((arr_14 [i_0] [i_2] [i_6 + 1]) ? (((-7426643052846121615 ? (arr_2 [i_1] [i_2]) : var_10))) : 9001158255388728577)), var_9));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (max((var_12 - var_1), ((((var_9 ? 9736269913285261948 : 1))))));
    #pragma endscop
}

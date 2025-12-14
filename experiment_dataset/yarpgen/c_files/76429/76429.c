/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((-812114872992849845 && ((min(var_5, var_0))))))) + (((var_3 * var_2) ? (-41 * var_8) : var_11))));
    var_14 = ((var_6 ? 14940 : ((max(10304865983469707836, var_7)))));
    var_15 = -14932;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 ^= (var_12 * -14941);
                                var_17 = (max(var_17, (arr_8 [i_0] [i_1] [i_2] [i_3 - 1])));
                                arr_14 [i_2] = 14943;
                            }
                        }
                    }
                }
                var_18 = (min((arr_2 [i_0]), var_11));
                var_19 = ((arr_11 [i_1 + 1] [17] [i_1] [i_1 - 1] [i_1 + 1]) ? (arr_11 [i_1 + 1] [i_1] [i_1] [i_1] [i_1 + 1]) : var_3);
            }
        }
    }
    var_20 = ((-(~-8812)));
    #pragma endscop
}

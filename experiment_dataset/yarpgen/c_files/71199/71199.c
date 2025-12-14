/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_14 = 6815203391853781531;
                arr_7 [i_0] [i_1] = (max((arr_5 [i_0]), var_5));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            {
                var_15 = (arr_10 [i_3 + 1] [i_2]);
                var_16 = (max(var_16, (((108 ? -1225743247 : 297371971)))));
                var_17 = ((((arr_8 [i_3] [i_2]) >= (0 <= 18446744073709551615))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_20 [i_2] [i_4] = (~(65535 + 2138433843614574969));
                            var_18 = (((max((arr_11 [i_2]), var_0)) < ((max((arr_16 [i_2] [i_2] [i_2] [i_2]), (!var_9))))));
                            var_19 = (var_8 | 0);
                            arr_21 [i_2] [i_3] [i_4] [i_2] = (max(((min((((arr_18 [i_2] [i_3] [i_4]) ? var_4 : 161)), ((((arr_14 [i_2] [i_2] [i_2] [i_5]) <= (arr_10 [i_2] [i_2]))))))), (((min((arr_13 [20] [20] [i_4]), (arr_9 [i_4] [i_5]))) / (var_0 | var_4)))));
                            arr_22 [i_2] [i_3] [i_4] [i_3] = (((!3980547410383879867) + 1976605358));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

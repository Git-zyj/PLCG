/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((((arr_6 [i_1] [i_0 - 1]) != (max((max((arr_6 [i_0 + 3] [i_1]), var_0)), ((69713883 ? -69713896 : 9223372036854775807)))))))));
                                var_18 = (((~var_12) ? ((max(var_8, (min(-159824676461166650, var_5))))) : (min((((!(arr_7 [i_2 + 1] [i_1])))), var_15))));
                            }
                        }
                    }
                }
                var_19 += ((69713899 ? (arr_0 [i_0 + 1]) : (arr_4 [i_0 - 1] [i_1] [i_0 + 3])));
                var_20 = (max(var_20, (arr_2 [1])));
            }
        }
    }
    #pragma endscop
}

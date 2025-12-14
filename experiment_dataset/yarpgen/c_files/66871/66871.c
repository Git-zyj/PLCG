/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_10 += (max(((2147483640 ^ (arr_5 [i_0 - 1]))), var_4));
                arr_6 [i_0] &= (max((arr_2 [10]), ((-26989 ? (((arr_1 [i_0] [i_0]) & -1973777397)) : (((!(arr_1 [1] [i_0]))))))));
                var_11 = (arr_0 [i_1]);
                var_12 = (max(var_12, (arr_4 [i_0] [i_1] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_13 = (max(2147483640, 8660007251808524521));
                            arr_12 [10] = (min((arr_9 [i_0]), 0));
                            var_14 = (min((arr_0 [i_0]), ((var_1 ? -8660007251808524521 : (arr_10 [i_2] [i_2] [i_2 + 1] [i_2])))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_15 = (((arr_15 [i_4] [i_4]) ? ((((((max((arr_16 [i_4] [i_4]), 77))) || ((((arr_16 [i_4] [i_4]) ? 1953 : var_8))))))) : 13579463569525566797));
        var_16 |= (((((-8660007251808524522 ? 0 : (arr_13 [i_4]))) % 9137917931903755032)) / var_1);
    }
    #pragma endscop
}

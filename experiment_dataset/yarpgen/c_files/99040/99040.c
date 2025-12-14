/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_14 = (((arr_2 [i_0]) ? (!10159) : (((!504403158265495552) ? (var_7 || var_9) : ((((arr_5 [i_0] [i_1] [i_1]) || var_12)))))));

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                var_15 = 6380721637342932323;
                                var_16 = ((-(!var_0)));
                            }
                            var_17 = var_5;
                        }
                    }
                }
                var_18 &= (arr_7 [i_0] [i_0 - 1] [i_1] [i_1] [i_0 - 1]);
            }
        }
    }
    var_19 = (1 < var_3);
    var_20 ^= (((((max(25791, 1)) * 1)) * var_0));
    var_21 = (max(var_5, (max((!var_10), (var_5 - 1)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            {
                arr_15 [i_5] [i_6 + 1] = 18446744073709551615;
                var_22 = 216172782113783808;
                var_23 = max((((((max(var_4, (arr_12 [i_6])))) * var_0))), (arr_14 [i_6 + 1] [i_6 + 1]));
                var_24 = ((0 >> (((arr_13 [i_6] [i_6 - 2]) - (arr_13 [i_5] [i_6 - 1])))));
            }
        }
    }
    #pragma endscop
}

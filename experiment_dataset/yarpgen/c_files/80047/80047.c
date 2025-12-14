/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (((127 ^ 148) ? 1947119321 : ((4294967281 & (min(1, (arr_4 [i_0] [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 -= (((((1 ? (arr_0 [i_0]) : var_9))) ? ((4294967146 ? var_0 : var_6)) : (min((max((arr_5 [4] [i_1]), (arr_0 [i_0]))), (var_11 / 127)))));
                            var_15 ^= (4294967150 ? 4294967168 : 3997956637);
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_16 = (!((((arr_17 [i_0] [8] [i_1] [i_4] [1] [i_1] [8]) * 1))));
                                var_17 &= (((!1) | (var_5 != var_9)));
                            }
                        }
                    }
                    var_18 = (((arr_4 [i_0] [i_0] [i_0]) == (arr_4 [i_0] [i_0] [i_4])));
                    var_19 = (min(var_19, ((1 ^ (arr_3 [i_4])))));
                    arr_20 [i_4] [i_1] [i_0] = var_0;
                }
            }
        }
    }
    var_20 = ((var_0 ? ((var_0 ? (~1756731290) : (~4294967295))) : ((((172661473 && (var_11 + var_7)))))));
    var_21 = var_0;
    #pragma endscop
}

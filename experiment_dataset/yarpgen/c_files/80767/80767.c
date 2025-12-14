/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = (((-4194303 % (((max(var_10, -126)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [10] [i_1] [i_2] [1] = ((-(var_10 % -112)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, (arr_3 [i_1] [i_1])));
                                var_15 ^= ((((((((max((arr_6 [i_0] [i_0]), -16)))) < (arr_15 [i_1] [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_3] [i_3 - 1])))) & -31861));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 8;i_6 += 1)
        {
            {
                var_16 = (min(-50, var_2));
                arr_24 [i_5 - 2] [i_5 - 2] [i_6 - 3] = (min((arr_2 [i_5] [i_5 - 1]), 15076947704496619236));
                var_17 -= (!var_7);
                arr_25 [i_5] = (arr_19 [i_5] [i_5]);
                var_18 = ((var_5 | (((((arr_14 [6] [i_5] [i_5 - 2] [14] [i_5 - 2] [i_5]) ? 7970289789454598354 : var_1)) << (((7256657025041978453 ^ 9223372036854775807) - 1966715011812797354))))));
            }
        }
    }
    #pragma endscop
}

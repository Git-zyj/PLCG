/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    var_17 = (!-3178244465);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    arr_10 [i_1] = (min(((((var_5 && var_11) ? 3178244469 : ((((arr_3 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : var_10)))))), 9223372036854513664));
                    var_18 = (((arr_8 [i_0 - 1] [i_1] [i_2] [i_1]) ? (var_6 * 1116722814) : (arr_8 [i_0 - 1] [i_0] [i_0] [i_1])));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_19 &= ((3178244470 ? 3178244465 : (arr_2 [i_0])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_20 = (max(var_20, (1116722830 - 3178244465)));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = (((arr_0 [i_4]) ? (arr_0 [i_3]) : (arr_0 [i_1])));
                                var_21 = (min(var_21, -var_14));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_22 = (min(var_22, (((min(((var_4 ? (arr_21 [i_0] [i_1] [i_6] [i_7] [i_8]) : var_0)), -3178244465)) / (3178244469 | -27)))));
                                var_23 = (min((!2050), (arr_4 [i_0 - 1] [i_7 + 1])));
                                arr_26 [i_8] [i_1] [i_8] [i_8] [i_8] = var_1;
                                arr_27 [i_8] [i_1] [i_6] [i_1] [i_0] = ((!((((((min(-27, -71)))) * ((248 ? 1116722842 : 27)))))));
                            }
                        }
                    }
                }
                var_24 = (min((((arr_19 [i_1] [i_0 - 1] [i_0 - 1] [i_1]) ? ((min(127, 160))) : (((arr_21 [i_0] [i_0] [i_1] [i_0] [i_0]) ? (arr_16 [i_0] [i_0] [i_1] [i_1] [i_1]) : 153)))), (!var_6)));
            }
        }
    }
    var_25 |= (65535 == -10143);
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            {
                var_26 ^= (((((((var_7 ? var_2 : var_0)) << (((arr_29 [i_10] [i_10]) + 106))))) ? ((0 ? 2042 : 95)) : (((!((min((arr_29 [i_10] [i_10]), 1))))))));
                arr_32 [i_9] [i_9] = 8;
            }
        }
    }
    #pragma endscop
}

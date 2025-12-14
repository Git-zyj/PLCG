/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = var_1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 21;i_4 += 1)
                            {
                                var_17 *= ((~(arr_8 [i_1 + 1] [i_2] [i_1 + 1] [i_0])));
                                var_18 = (((10839958902061328095 & (~10652372362747876216))));
                                var_19 = (max(-8842556871841319829, (((((((!(arr_6 [9] [i_4] [i_2] [i_3]))))) < (((arr_1 [15]) & var_8)))))));
                            }
                            var_20 |= ((18446744073709551615 << (18446744073709551615 - 18446744073709551597)));
                            var_21 = var_1;
                            var_22 = ((((min((!var_15), 53))) || ((!((((arr_10 [i_2]) ? var_4 : 117)))))));
                            arr_11 [i_0] [i_0] [i_3] [i_3] = (arr_4 [i_0] [i_0] [i_0] [i_3]);
                        }
                    }
                }
                var_23 = var_10;
                var_24 = (min(var_24, (arr_1 [i_0])));
                var_25 = var_14;
            }
        }
    }
    var_26 = 689355734;
    #pragma endscop
}

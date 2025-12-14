/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                var_16 *= (((((~((~(arr_3 [i_1] [i_0] [i_1])))))) ? (~18054366295922547180) : (((~(arr_3 [i_1] [i_1 - 3] [2]))))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_6 [i_0] [i_0] = ((!((!(arr_1 [i_0 - 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 += ((~(((~1697726585) ? (-9223372036854775807 - 1) : (max(1069597107, (arr_4 [i_1] [i_1 + 1] [i_1] [i_1 + 1])))))));
                                arr_13 [i_0] [i_3] [i_2] [i_0] [i_0] = (max(3225370178, -107));
                                arr_14 [i_0] [i_1 - 1] [i_1] [i_3 - 3] [i_3] [i_4] |= (arr_1 [i_0]);
                            }
                        }
                    }
                    arr_15 [i_0 + 1] [i_1] [i_0] = ((-(max(89, 89))));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_5] [i_0] [i_6] = (arr_2 [i_0]);
                            arr_25 [i_0] [i_0] [i_0] [i_0] = ((min(-65525, 2421273867)));
                            var_18 = (min(var_18, (((~(min(9223372036854775792, 101)))))));
                            arr_26 [i_0] [i_0] [i_0] [i_0 + 1] [16] = min((((~44165) ? (((arr_23 [i_0 + 1] [i_0 + 1] [i_0]) ? (arr_9 [i_0] [i_1] [i_1] [i_5] [i_0] [i_6 - 1]) : (arr_8 [i_0 - 1]))) : (arr_8 [i_5]))), (((!(arr_18 [i_0 - 1] [i_0 + 1])))));
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(((~(~var_11))), var_5));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 = -12;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0 + 4] [i_1] = ((!(((((var_9 ? var_11 : var_0))) || 1))));
                var_17 = -3235;
                arr_6 [i_1] = 511;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_18 = (max(var_18, 3185776468176446934));
                            arr_12 [i_3] [i_2] [i_1] = (arr_10 [i_0] [i_1] [i_2] [i_3]);
                            var_19 *= (((var_9 % (arr_11 [i_3]))));
                            var_20 = ((((arr_4 [i_0]) ? var_10 : var_14)) == ((var_8 ? (arr_2 [i_0 + 1] [i_2]) : var_9)));
                        }
                    }
                }

                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    var_21 = (max(var_21, 16384));
                    var_22 = (max(var_22, ((min(-21315, ((~(arr_4 [i_0 - 2]))))))));
                }
            }
        }
    }
    var_23 = var_12;
    #pragma endscop
}

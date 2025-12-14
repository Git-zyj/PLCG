/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((!(~9223372036854775807)))));
    var_21 += -var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] |= ((!((((~(arr_4 [i_1] [i_1])))))));

                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    var_22 = (~1305553779306361027);
                    var_23 ^= 27998;
                    arr_9 [i_0] [20] [11] = ((!(~-22197)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_4] [10] [i_1] [10] = ((!(!-var_1)));
                                arr_15 [i_4] [i_2 + 3] [i_2 + 3] [21] [i_4] = ((-((~(~var_10)))));
                                var_24 = (max(var_24, (((!(!-22197))))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    arr_20 [i_5] = var_10;
                    var_25 += ((!(~-232)));
                }
                arr_21 [i_0] [i_0] = (!-9223372036854775807);
            }
        }
    }
    var_26 = ((~((-(!var_9)))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_15 |= (((((((299038211 ? 14681139149008965656 : -1))) ? -4652410374134877242 : (arr_1 [i_0]))) > 18446744073709551615));
                            arr_11 [i_2] [i_2] = var_9;
                            arr_12 [i_2] = (max((((-(!var_12)))), (min((arr_10 [i_3] [i_2] [i_2] [i_0]), (arr_9 [i_0] [i_2] [i_2] [i_2])))));
                        }
                    }
                }
                var_16 = ((((((arr_3 [i_1]) ? (arr_3 [i_0]) : (-9223372036854775807 - 1)))) ? 1046641117382108440 : (arr_7 [i_0])));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_17 = (max(var_17, (((!((((arr_1 [i_0]) ? -28906 : (arr_1 [15])))))))));
                                arr_21 [i_4] [i_4] [i_6] [i_4] [i_4] = ((-5652524488484879248 ? -9223372036854775802 : 0));
                                var_18 = min((-9223372036854775807 + 2236974324), (((arr_7 [i_4]) / (arr_2 [i_6]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (min((max((3096 >= var_8), 1125899906834432)), (-9223372036854775807 - 1)));
    #pragma endscop
}

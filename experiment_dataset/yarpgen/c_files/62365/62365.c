/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((max(((min(var_0, (var_6 != var_7)))), (min((max(var_3, var_0)), var_8)))))));
    var_14 = (-(var_1 / var_7));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 *= ((~(arr_6 [i_2] [i_2] [12])));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_4] = ((arr_5 [i_4] [i_0 + 2]) > 1040187392);
                                var_16 &= -var_10;
                                var_17 -= var_9;
                                var_18 = (arr_9 [i_4] [i_4] [i_4] [i_4] [1] [i_4]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

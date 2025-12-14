/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, (((+((((arr_6 [i_0 + 1] [i_1]) <= ((((var_4 >= (arr_7 [17] [17] [10])))))))))))));
                    var_13 += (((min((arr_4 [i_1 + 1] [i_0 - 1]), var_2)) % (!0)));
                    var_14 = var_0;
                    var_15 = ((12706887256862449962 >= (arr_7 [i_1 + 2] [i_0 + 1] [i_0 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [3] [i_1] = (arr_10 [i_0 - 1] [i_1] [i_2] [i_3] [i_4 - 3] [i_2]);
                                var_16 = ((~(((arr_7 [i_0 + 1] [i_0 - 1] [i_1 + 1]) | var_4))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 += var_6;
    var_18 += ((~(~var_9)));
    #pragma endscop
}

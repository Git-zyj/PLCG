/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_6, (((((min(26, 69))) || (~var_3))))));
    var_16 = ((~(((((max(255, var_8))) > var_13)))));
    var_17 = (((~var_3) ? var_7 : (!-123)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = ((-((((max((arr_4 [i_0]), var_4)) > (arr_3 [i_1 + 2] [i_1 + 2] [i_1 + 2]))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((((arr_8 [i_0] [7] [i_2] [i_3] [i_2]) ? ((min((max((arr_9 [i_0] [i_4]), var_3)), var_6))) : 255)))));
                                var_20 ^= (min(((((max(var_12, var_12))) ^ 17)), ((~(var_14 >= var_8)))));
                                var_21 = ((((~(!65535))) - -var_10));
                            }
                        }
                    }
                }
                arr_13 [12] [i_1] = (((((~(~var_13)))) != (((arr_5 [i_0]) ? (arr_5 [i_1 - 1]) : (arr_5 [i_0])))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((max(var_14, var_2)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (((~(max(1452870980, (arr_3 [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 = (min((arr_10 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_1]), (((-(arr_1 [i_0 + 1]))))));
                                var_20 = (max((min(1452, -10687)), ((max((arr_10 [i_2] [i_1 + 3] [i_0 - 2] [i_3] [i_1]), var_12)))));
                                var_21 = (((min((!100), -var_13)) & 254));
                            }
                        }
                    }
                    arr_11 [i_0 + 1] [i_1] [i_2] = var_1;
                }
            }
        }
    }
    var_22 = (((!((min(23, -4773))))));
    #pragma endscop
}

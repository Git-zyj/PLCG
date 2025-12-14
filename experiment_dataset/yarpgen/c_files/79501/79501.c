/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = ((((~((58 ^ (-32767 - 1))))) | (max(var_7, ((0 << (42067 - 42062)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2 - 3] [i_3] [i_0] [i_3 + 1] [i_3] = 37480;
                                var_18 += ((((((min(var_1, -1))))) <= (((arr_5 [i_0] [i_1] [1] [i_4 - 1]) & (((var_11 ? 1 : var_11)))))));
                                var_19 = (max(var_19, (((-(max(((((-32767 - 1) * 44541687))), (var_1 - var_10))))))));
                                var_20 = 12205;
                                var_21 = (max(((~(((arr_0 [i_0]) ? 89 : var_15)))), (arr_10 [i_3] [i_2 - 1] [i_3])));
                            }
                        }
                    }
                    arr_13 [i_0 + 2] [i_0 + 2] [i_0] [i_0] = (arr_5 [13] [i_0 - 1] [i_0 - 1] [13]);
                }
            }
        }
    }
    var_22 = 1885228723;
    #pragma endscop
}

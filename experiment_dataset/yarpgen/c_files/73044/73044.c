/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 = ((-(((var_11 ^ 2147483647) ? ((384290591149357829 ? var_5 : 0)) : var_9))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = max((((arr_1 [i_0 + 3]) ? var_7 : (arr_3 [i_0]))), ((max(-10, (arr_1 [i_0 + 3])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_3] = var_11;
                            arr_11 [i_0] [i_1] [i_0] [i_3] = -384290591149357836;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_17 [i_5] [i_5] = min((((((34911 ? var_7 : 0))) ? 1 : (min((arr_13 [3] [i_5] [i_4 - 1] [i_5]), (arr_12 [i_0] [i_5]))))), var_1);
                            arr_18 [4] [i_0] [i_4] [i_4] = (max(9223372036854775807, ((-9195832291143947103 ? (arr_13 [i_1 - 1] [i_5] [i_5] [i_5]) : ((64 ? var_5 : (arr_16 [1] [i_0] [i_4] [1])))))));
                        }
                    }
                }
                arr_19 [i_0] [i_1] = var_6;
            }
        }
    }
    #pragma endscop
}

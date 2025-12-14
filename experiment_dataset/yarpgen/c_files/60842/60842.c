/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    var_17 = (min(var_17, ((((min(var_16, var_10)) + (((((-(arr_4 [i_1] [i_1] [i_2] [i_0]))) & (((arr_3 [10]) ? var_4 : var_0))))))))));
                    var_18 = (max(var_18, ((((((var_1 ? var_10 : -1))) ? (arr_1 [i_1]) : (arr_5 [i_0 - 2] [i_0 - 2] [i_1] [i_2 - 1]))))));
                }
                arr_7 [i_0] [i_0] [i_1] = (147 > 27014);
                var_19 = ((min((max((-9223372036854775807 - 1), 0)), (arr_4 [i_0] [i_0] [i_0 + 1] [i_0]))));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_20 = (((((-((var_9 / (arr_10 [i_3] [i_1])))))) && ((((1944754090598851047 % (arr_4 [i_0] [i_0] [i_3] [i_5])))))));
                                var_21 = ((((((arr_0 [i_0]) ? ((1944754090598851047 >> (1944754090598851047 - 1944754090598851046))) : ((((-20280 + 2147483647) >> 0)))))) ? -1944754090598851033 : ((~(arr_6 [i_5] [i_5] [i_5 + 3])))));
                                var_22 = var_12;
                            }
                        }
                    }
                }
                var_23 = (max((arr_0 [i_1]), 255));
            }
        }
    }
    var_24 = min(var_12, var_12);
    #pragma endscop
}

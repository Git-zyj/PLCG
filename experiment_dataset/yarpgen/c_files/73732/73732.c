/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = -5499772543410863024;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 = ((((arr_6 [i_1 - 2] [i_1] [i_2] [i_3]) ? -1 : (arr_5 [i_1 - 2] [i_0] [i_3]))));
                                var_19 = (arr_3 [i_2]);
                            }
                        }
                    }
                }
                arr_11 [i_0 - 1] [i_0] = (min((((!(arr_1 [i_1 - 2] [i_1 + 1])))), (max(0, 2147221504))));
            }
        }
    }
    var_20 = (max(var_20, 0));
    #pragma endscop
}

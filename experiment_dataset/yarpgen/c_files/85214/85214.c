/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_10 - -1884079392) - (var_12 + var_7)));
    var_17 |= 31;
    var_18 *= -1969248796339008505;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_19 &= (arr_4 [i_2]);
                            var_20 *= ((7650 + 1) ? var_3 : 168);
                            arr_10 [i_0] [i_0] [i_0] = var_5;
                        }
                    }
                }
                var_21 = var_11;
                arr_11 [i_0] = (arr_1 [i_1] [1]);
                var_22 = 1;
            }
        }
    }
    var_23 = (168 != 162);
    #pragma endscop
}

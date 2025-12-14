/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(-var_11, -1879048192))) / (min(((((-127 - 1) & 157))), ((var_7 ? var_13 : var_10))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = ((-(min(-9223372036854775797, 1))));
                                var_20 *= ((((!(((3758096384 << (((arr_3 [i_0] [i_0] [i_2]) - 94))))))) ? var_17 : ((((arr_3 [i_3] [i_2] [i_0]) ? 178 : var_16)))));
                            }
                        }
                    }
                    var_21 += ((!((max(1, 72057594004373504)))));
                }
            }
        }
    }
    var_22 = (min(var_22, var_6));
    var_23 = (min(var_23, var_14));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_7 * ((-7327220105651724061 ? var_1 : 7327220105651724060))));
    var_13 ^= (~0);
    var_14 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_15 = ((max(((var_6 & (arr_6 [i_1] [i_2] [i_2]))), (((arr_4 [i_0] [i_0] [i_0]) * -556526115)))));
                            var_16 = 18446744073709551615;
                            var_17 = (max(var_17, ((((2839678599932110112 - (arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 1])))))));
                        }
                    }
                }
                var_18 -= (max((var_11 ^ 778302732), ((((arr_2 [i_0]) & 1)))));
            }
        }
    }
    #pragma endscop
}

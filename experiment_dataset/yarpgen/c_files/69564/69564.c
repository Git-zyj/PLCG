/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min((~var_9), (min(var_9, var_0)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = min(((!(arr_7 [i_0] [i_0] [i_0] [i_0]))), 1);
                                var_14 = (min(var_14, var_2));
                                var_15 |= (max((arr_4 [i_0 - 3] [i_1] [i_0 - 3]), 1));
                                var_16 ^= (min((arr_3 [i_0 - 3] [i_0 - 3] [i_4]), (min((arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_2 + 1] [i_2 + 1] [i_3] [i_0 - 2]), ((max(var_1, -8992797728418873352)))))));
                            }
                        }
                    }
                    var_17 = (max(27175, (((~var_6) ? 120 : 1))));
                    var_18 *= ((86541123500994818 > (arr_12 [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}

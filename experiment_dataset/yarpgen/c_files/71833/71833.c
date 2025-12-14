/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -876152206375237767;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = (-(((!(arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 1])))));
                arr_6 [i_0 - 1] [i_0 - 1] [i_0] = (min(127, (((!(((arr_0 [i_0] [i_0 - 1]) > (arr_4 [i_0] [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_22 ^= -120;
                            var_23 = ((118 ? 260046848 : 118));
                            var_24 = (max(118, -105));
                            arr_11 [i_0] [i_1] [i_0] [4] = (-(((((-108 ? var_2 : -121))) ? (arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 1]) : var_12)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (((arr_2 [i_0]) ^ 235668493034643658));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_19 = (min((~var_12), 18211075580674907958));
                            arr_8 [i_0] [i_1] [i_2] [i_3] = (((!(arr_5 [i_2] [i_1] [i_2] [i_0]))) ? ((-(arr_6 [i_1 + 3] [i_1 + 1] [i_1 + 3]))) : -8);
                            var_20 += (max((((((18211075580674907936 ? 1 : var_10))) + (arr_7 [i_0] [i_1 + 3] [i_1 + 2] [12]))), (((max((arr_1 [i_0] [i_0]), 107))))));
                            var_21 = (min((var_2 - -106), var_6));
                        }
                    }
                }
            }
        }
    }
    var_22 = var_10;
    #pragma endscop
}

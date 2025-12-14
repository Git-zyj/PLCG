/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 = (!var_12);
                            arr_11 [i_3] = -1385944753;
                        }
                    }
                }
                var_15 = ((~(((!(!38047))))));
                var_16 = (min(var_16, 2538886383));
                var_17 = ((-(((!(arr_5 [i_1] [i_0] [i_0]))))));
            }
        }
    }
    var_18 = -0;
    var_19 &= ((~((~(~var_1)))));
    var_20 = ((!(((~(!var_9))))));
    #pragma endscop
}

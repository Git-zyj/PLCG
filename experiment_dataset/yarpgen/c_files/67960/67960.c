/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((((((max(var_2, -187596214))) ? (max(4637717092715109946, 535524123561416871)) : (-14 / 1688970699))) * 0));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = ((((-1688970700 ? 0 : 4637717092715109952))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_22 = (max(-189521350, (max(var_18, (((var_3 ? (arr_5 [i_0] [i_0 - 1] [i_0]) : 4637717092715109946)))))));
                            var_23 &= 1688970701;
                        }
                    }
                }
            }
        }
    }
    var_24 = 1688970699;
    var_25 = (((((!var_15) < var_14)) ? var_14 : var_3));

    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_12 [i_4] = (max((((min(var_12, 52)) - (arr_0 [i_4] [i_4]))), -1534821511));
        arr_13 [i_4] |= (arr_9 [2] [2]);
    }
    #pragma endscop
}

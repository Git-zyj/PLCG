/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (~1926776400);
        var_17 = (max(0, (min((var_13 | var_7), (122 <= 122)))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (!23466);
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_18 = ((134 == (147 + -2147483636)));
                        var_19 += ((-((min(-110, -126)))));
                        var_20 *= var_9;
                    }
                }
            }
        }
        var_21 = (min(var_21, (~var_2)));
        var_22 = (((min((-124 * 118), ((min(113, var_0))))) >= 127));
    }
    var_23 = (min((~var_6), ((((105 ? var_16 : var_15))))));
    var_24 = -40;
    var_25 = (min(var_25, ((max(var_7, var_14)))));

    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    {
                        var_26 *= (max(-1, (min(110, var_16))));
                        var_27 = 25;
                        var_28 = (min(var_28, ((max(-110, 242)))));
                    }
                }
            }
        }
        var_29 = (((min(((max(0, 127))), ((3 ? 2 : 242)))) + 3));
    }
    #pragma endscop
}

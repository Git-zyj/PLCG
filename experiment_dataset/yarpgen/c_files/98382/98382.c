/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = var_13;

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            var_17 &= (max((!var_5), 46084));
            arr_5 [14] |= ((65521 && ((19449 >= (arr_0 [i_1 - 2] [i_1 - 2])))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            var_18 ^= (arr_12 [i_0] [i_3]);
                            arr_15 [i_1] [i_0] [i_0] [i_0] [i_1] = var_4;
                            arr_16 [i_0] [i_3] [i_0] [i_0] &= 5832;
                            var_19 &= (+(((arr_9 [i_2 + 3] [10] [i_2 - 1] [i_3]) + (arr_9 [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_3]))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_20 -= 0;
                            var_21 = (((~(min(64760, 11906348627910927545)))));
                        }
                        var_22 = (arr_6 [i_1] [i_1] [i_1] [i_1]);
                        var_23 = (((797950102 | (1 && 64754))));

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_24 *= var_5;
                            arr_22 [i_0] [i_1] [i_0] [i_1] [i_2] [16] [i_6] = (~((~(0 <= 2))));
                        }
                    }
                }
            }
            var_25 = ((((((43690 & 1) >> (!0)))) ? ((min((arr_21 [i_0]), var_12))) : (((arr_7 [16] [i_0] [i_0]) ? ((max(var_3, var_0))) : (~var_1)))));
            var_26 -= 776;
        }
        arr_23 [i_0] [i_0] = (((((~1) ^ 18854)) & var_14));
    }
    var_27 ^= ((-((var_3 ? var_3 : var_7))));
    #pragma endscop
}

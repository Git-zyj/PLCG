/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_0 < (max(var_9, ((max(4833, var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 &= (((((3864890501 ? 255 : 3410894510))) ? 0 : var_6));
                var_18 = (max(var_18, (((~((0 ? ((var_6 ? var_11 : var_3)) : (min(var_13, 1)))))))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    var_19 = (((((var_13 ? 3182465476497999605 : var_7)) - (~var_15))));
                    var_20 = (max((((7564431645921869782 ? 1 : 1))), var_3));
                    var_21 = 4294967295;
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_1] [i_3] [i_1] [i_1] = var_6;
                    arr_13 [i_1] [i_1] [i_3] = ((var_3 << (var_3 != 7168)));
                    var_22 = -var_12;
                    var_23 = var_8;
                }
                for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                {
                    var_24 = (min(var_24, (((var_5 == ((min(var_0, 1))))))));
                    var_25 |= (((13475158172199346089 ? 54817 : 2116548811822421482)));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    arr_21 [i_0] [i_1] [i_5] [i_5] = (~var_11);
                    var_26 = (min(var_26, ((((~136) ? 154 : (~var_5))))));
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((32973 <= var_7) & (min(-24778, ((var_7 ? var_6 : -162214452))))));
                arr_7 [i_0] [i_1] [i_1] = (min(((((min(2147475456, -2147475457))) ? ((2147475456 ? 26441 : 1858717535)) : 920918660)), ((var_4 ? 32767 : 2147483646))));
                arr_8 [i_0] [i_0] [i_1] = var_3;
                var_12 = (max(-2147475436, -var_5));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    {
                        arr_20 [i_2] [i_3] [i_2] [i_5 + 4] [0] = ((-2147475463 ? 397888008 : var_0));
                        arr_21 [i_2 + 1] [i_2 + 1] [i_4 - 1] [i_2 + 1] = var_8;
                        arr_22 [i_2] = 127;
                        arr_23 [i_2 - 2] [i_2 - 2] [i_2 - 2] = -1044593969;
                    }
                }
            }
        }

        for (int i_6 = 3; i_6 < 13;i_6 += 1)
        {
            arr_28 [i_2] [i_2] [i_2 - 2] = -1;
            arr_29 [i_6] [i_6 + 1] [i_6 + 2] = (3373691848 / -1094236530);
        }
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            var_13 &= -2;
            arr_34 [i_7] = -164628471;
        }
        var_14 = var_2;
    }
    for (int i_8 = 3; i_8 < 10;i_8 += 1)
    {
        arr_37 [i_8 - 3] = (min(((-650228957 ? 65535 : 2340326568)), ((max(127, 1)))));
        var_15 = (min((min(354955727, 1)), (max(var_5, 0))));
    }
    #pragma endscop
}

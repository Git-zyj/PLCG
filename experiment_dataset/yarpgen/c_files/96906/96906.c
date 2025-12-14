/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (arr_2 [i_0])));
                var_12 = ((arr_2 [i_1]) ? (((-32767 - 1) % (((var_1 ? var_7 : 32757))))) : (var_5 < var_2));
            }
        }
    }

    for (int i_2 = 4; i_2 < 14;i_2 += 1)
    {
        var_13 = (min((max((~var_2), ((var_7 ? var_9 : 2147483634)))), ((var_8 ? ((max(109, 220))) : (((arr_4 [i_2] [i_2]) ^ (arr_2 [i_2])))))));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        var_14 |= (max(((-(arr_16 [i_3 + 1] [i_4 - 2]))), ((var_2 ? (arr_16 [i_3 - 2] [i_4 - 3]) : var_2))));
                        var_15 = 1064993637;
                        var_16 = ((((((-1064993622 ? var_7 : 4294967279)))) ? 1064993622 : (max((arr_12 [i_2 - 3] [i_4 + 1] [i_3 - 1]), (arr_12 [i_2 - 1] [i_4 + 3] [i_3 - 1])))));
                    }
                }
            }
        }
        var_17 = (min(((-(max(var_2, (arr_5 [i_2] [i_2] [15]))))), ((min(((32767 ? var_10 : var_1)), 1064993622)))));
        var_18 *= (((arr_16 [i_2 - 2] [i_2 - 2]) ? -32767 : ((max(576460752303423487, -19088)))));
        var_19 = (min(var_19, var_5));
    }
    var_20 = -32761;
    var_21 = ((!(((var_9 ? var_10 : var_2)))));
    var_22 = var_6;
    #pragma endscop
}

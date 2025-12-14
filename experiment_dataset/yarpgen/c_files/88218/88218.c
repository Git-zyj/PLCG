/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((((!((min(var_5, var_3)))))), (((~var_0) ? var_10 : ((var_0 ? var_0 : var_9))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -123;
        var_14 = var_0;
        var_15 -= ((!(!124)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_2] = ((-((((((arr_1 [i_2]) ? (arr_3 [i_0] [i_1] [i_2]) : (arr_5 [i_2] [i_1] [i_2])))) ? -122 : 123))));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_0] = (max((((((-120 ? 58362 : 64728)) / 14079))), (((arr_4 [i_0] [i_1] [i_2]) ? (arr_5 [i_1] [i_2] [i_2]) : (arr_4 [i_0] [i_2] [i_3])))));
                        var_16 = ((max((min((arr_8 [i_0] [i_1] [i_2] [i_3] [i_3]), var_0)), (arr_4 [i_0] [i_0] [i_0]))));
                    }
                }
            }
        }
    }
    var_17 = max(var_7, (max((min(var_7, var_1)), ((max(-122, 122))))));
    #pragma endscop
}

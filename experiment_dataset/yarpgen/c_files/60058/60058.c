/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_11 = (min((min((min(var_5, 8971682702433841247)), -8971682702433841247)), ((min((~var_6), 0)))));
        var_12 = (min(var_12, ((!(((~((359021106 ? 9475061371275710369 : 1703701990)))))))));
    }
    var_13 = (max(var_13, var_2));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            {
                var_14 = (!var_3);
                arr_10 [i_2] [i_2] = 1703701990;
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_15 [i_2] [i_3] [i_3] [i_4] = 847595126;
                            var_15 = (((1703701990 ? 9475061371275710378 : var_8)));
                            arr_16 [i_4] [13] [i_2] [i_2] [i_2] [i_1] = (min((arr_4 [i_2 - 1] [i_3]), (min((arr_11 [i_2 + 1] [i_2 + 1]), ((1537922410694447832 ? var_4 : 13793511394023241479))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

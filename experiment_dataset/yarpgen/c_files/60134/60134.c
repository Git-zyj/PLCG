/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((~var_15) / ((var_7 ? (((1441299793 ? var_19 : 32461))) : -1441299783))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_21 = ((((min(var_5, (min(964543336, var_3))))) ? (min(4055843837, 1329439101)) : -1329439090));
                            arr_8 [i_2 + 1] [i_0] [i_0] [i_2] = ((((min((~var_9), 20))) ? (arr_3 [i_1]) : (var_8 - -1329439101)));
                        }
                    }
                }
                var_22 = (((((12806 < 1329439074) ? (max(-15, var_10)) : (((arr_3 [i_0]) ? 248 : 31593))))) - (((~33943) ? ((-(arr_6 [i_0] [i_0] [i_1 - 1] [i_1]))) : (arr_0 [i_1 - 2] [i_1 + 2]))));
                var_23 = ((-553262403 ? (((!(arr_5 [14] [i_0] [5])))) : (((var_15 >= ((var_12 ? (arr_6 [i_1] [6] [i_0] [i_0]) : var_4)))))));
                var_24 = (min(var_24, (((!((min(((((arr_3 [18]) ? 1329439086 : var_13))), 10523011906808346638))))))));
            }
        }
    }
    var_25 = (~var_18);
    #pragma endscop
}

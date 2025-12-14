/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_2 [13] = 65535;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_10 [i_0 - 3] [i_0 - 3] [i_0 - 4] [i_0 - 2] [13] [i_0 - 4] = 13492395964507200389;
                        arr_11 [i_1] [i_2] [i_1] [i_0] = var_6;
                        var_15 = (((((4954348109202351225 ? (arr_4 [i_0 - 2] [i_0] [i_1]) : (arr_4 [i_0 + 1] [i_1] [i_0 + 1])))) ? ((min((arr_4 [i_0 + 1] [i_1] [i_2]), (arr_4 [i_0 - 2] [i_0] [i_2])))) : ((min((arr_4 [i_0 - 1] [i_1] [i_2]), (arr_4 [i_0 - 2] [14] [0]))))));
                        var_16 = ((0 ? (max(((4954348109202351221 ? (arr_8 [i_0] [19] [i_0] [0] [i_3]) : var_5)), var_9)) : 4294967295));
                    }
                }
            }
        }
    }
    var_17 = (!var_5);
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 20;i_5 += 1)
        {
            {
                arr_17 [i_4] [i_4] = 1;
                var_18 ^= (((0 ? 244 : 4954348109202351228)));
            }
        }
    }
    var_19 = var_12;
    #pragma endscop
}

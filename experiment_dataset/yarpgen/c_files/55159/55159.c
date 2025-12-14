/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_10 [i_2] [i_0] = (arr_5 [i_2 - 1]);
                        var_13 *= ((((((arr_9 [i_0] [i_3 - 2] [i_2 - 1]) > (arr_8 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 2])))) >= ((-1979259946 ? -1493177991 : 162))));
                        var_14 = 856093686;
                    }
                }
            }
        }
        var_15 *= (((((arr_0 [i_0]) * 3076077376)) * ((-(arr_6 [i_0] [i_0])))));
        arr_11 [i_0] = 10262;
        arr_12 [i_0] [i_0] = (((-32767 - 1) ? (57637021 | 10262) : ((((min(var_2, (arr_0 [i_0]))) > ((((arr_4 [10] [4] [5] [8]) ? 10269 : 0))))))));
    }
    var_16 = var_0;
    var_17 = ((((((213 || var_3) ? var_5 : ((9150941059871607818 ? -28123 : 92))))) ? 2913971425 : var_8));
    #pragma endscop
}

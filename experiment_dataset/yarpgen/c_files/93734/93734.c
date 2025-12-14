/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((1 < (min(var_4, (var_1 - 239)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((-119 ? 8520 : 1));
                    var_14 = (!-20);
                    var_15 = 65535;
                    arr_9 [i_1] [i_1] [i_2] = min((((~(arr_5 [i_1] [i_1] [i_2])))), (arr_6 [i_1] [i_1] [i_2]));
                }
            }
        }
        arr_10 [i_0] [i_0] = (max(1, (arr_2 [i_0] [i_0])));
        var_16 += -65535;
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_17 = ((!((((arr_0 [i_3]) * (((arr_4 [i_3] [3]) >> (-2950747032570153002 + 2950747032570153033))))))));
        arr_13 [9] [i_3] = ((-(min((arr_1 [i_3] [i_3]), (arr_11 [i_3])))));
    }
    var_18 = 17585858831032618233;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (arr_6 [1]);
                var_17 += (((((arr_2 [1]) ? (arr_2 [1]) : var_9)) - (((-var_14 <= ((1 ? var_4 : var_15)))))));
                arr_8 [i_0] [i_0] [i_0] = -80;
            }
        }
    }
    var_18 = (var_4 | ((max(1, (~var_2)))));

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        arr_20 [i_2] [i_3] [i_3] [i_3] [i_2] = ((((min(((1 ^ (arr_2 [i_2]))), ((min(var_3, (arr_18 [i_2] [7] [i_5] [7] [i_2] [i_2]))))))) ? (max((arr_11 [i_2] [i_3] [i_5]), (~var_14))) : (arr_17 [i_2] [i_3 + 1] [i_3 + 2])));
                        var_19 = (min(var_19, (max(31849, 1573241946))));
                    }
                }
            }
        }
        var_20 = (max((((1 == (arr_3 [i_2] [i_2])))), 90));
    }
    var_21 = ((1 <= (229 >= 6999)));
    var_22 = (((((((-66 ? 169 : -8455059085089853363))) ? ((87 ? var_12 : var_13)) : var_0)) << (((((~var_6) ? var_12 : (~var_15))) - 193))));
    #pragma endscop
}

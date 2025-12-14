/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((var_9 ? var_8 : var_9))) || var_0)) ? var_14 : (min(var_14, (15 - 32767)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = ((((max(((min(var_7, var_14))), ((65535 ? 4 : var_0))))) ? ((max(var_0, var_2))) : 251));
        var_18 = ((((max(4, (arr_1 [i_0] [i_0])))) != (((((-6953 - var_13) || (((4 & (arr_1 [11] [10]))))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = (((~(arr_4 [i_1] [i_1]))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_19 = (((arr_7 [i_2]) | (arr_8 [i_1] [i_2] [i_1])));
            var_20 = 248;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_12 [i_1] = (arr_6 [i_1]);
            var_21 ^= 80;
        }
        var_22 = ((((((min((arr_4 [i_1] [i_1]), var_12))) ? ((min(var_9, var_8))) : 28611)) - ((1 ? 96 : ((0 ? var_7 : var_7))))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_17 [i_4] = (arr_8 [i_4] [i_4] [i_4]);
        var_23 ^= (min(1, (((arr_10 [i_4] [i_4]) ? (arr_10 [i_4] [i_4]) : (arr_10 [i_4] [i_4])))));
        var_24 = ((~(((((var_6 ? -100 : (arr_14 [i_4] [i_4])))) ? ((var_9 << (var_2 + 7380058232567524084))) : var_10))));
        var_25 = (max(var_25, ((((174678261 + var_6) - (((49 ? 383277817 : -13698))))))));
    }
    var_26 = var_3;
    #pragma endscop
}

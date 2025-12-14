/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_4 & (((4294967295 >= var_3) * (max(var_9, var_6))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (max((max((arr_2 [i_0]), (-32767 - 1))), ((((arr_1 [i_0] [i_0]) || (arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] [18] = (((arr_2 [i_0]) ? var_5 : (((arr_0 [i_0] [i_0]) ? (((var_3 ? -6672 : 0))) : (((arr_1 [i_0] [i_0]) >> (((arr_1 [i_0] [i_0]) - 7701684901393279692))))))));
        var_18 = (min(var_18, ((((5135 + 18446744073692774400) <= (arr_1 [1] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] = 9579;
                    arr_9 [i_0] [i_1] [i_0] [11] = ((-498892521460839804 ? 267911168 : (arr_7 [i_2 - 2] [i_2 - 1] [i_2 - 1])));
                    var_19 = (min(((295 ? 2278624211 : -6672)), ((((arr_1 [i_2] [i_2 - 2]) && var_12)))));
                    var_20 = (min(var_20, (arr_7 [i_0] [i_2 - 1] [1])));
                    var_21 = 40;
                }
            }
        }
        var_22 = var_2;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            arr_15 [i_3] = var_9;
            var_23 = (min(var_23, var_0));
        }
        var_24 = 46707;
        var_25 = (min(var_25, (18446744073709551615 <= 2862655580189918894)));
    }
    var_26 = min(var_8, (var_1 || var_6));

    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        arr_18 [i_5] = (((arr_16 [i_5]) ? 267911168 : (arr_16 [i_5])));
        var_27 = -1;
        var_28 -= (((-307157038 ? var_5 : (arr_0 [18] [i_5]))));
    }
    var_29 = (((((var_11 ? (255 ^ var_15) : (max(236, 0))))) ? var_9 : ((max((var_6 || var_6), var_14)))));
    #pragma endscop
}

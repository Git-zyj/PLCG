/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_18 = (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])));
        var_19 *= (((arr_1 [i_0]) == (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_20 = (~96);

        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_21 = ((-15911 ? 9050 : 3886051575));
            var_22 ^= (((!45) ? 160 : (!3568131097812219916)));
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
        {
            var_23 = (62885 <= -1);
            var_24 = (arr_7 [i_1] [i_3]);
            arr_11 [i_3] [i_3] = (319563781 * 3568131097812219916);
        }
        var_25 = (!-638718660028245447);
    }

    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_26 = (min(var_26, 2147483647));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    {
                        arr_20 [i_4] [i_7] [i_6] = (114 | 46);
                        var_27 = 68;
                        var_28 = (!var_4);
                    }
                }
            }
        }
        var_29 = min(383, (((arr_16 [i_4] [i_4] [6] [i_4]) ? ((var_17 ? 62885 : var_13)) : (((min(-31926, 156)))))));
    }
    var_30 = (((var_3 ? (max(var_10, (-32767 - 1)) : 229))));
    var_31 = ((var_13 ? ((var_2 ? ((1243282734 ? 3975403515 : var_3)) : ((255 ? 68 : var_2)))) : (min(var_8, ((60929 ? 2650 : 319563781))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((~var_2), ((min(-25031, (var_6 < var_6))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_18 = ((arr_1 [i_1]) ? ((-25031 ? var_9 : var_9)) : ((var_11 ? 0 : 58893)));
            var_19 += (arr_3 [i_0]);
            var_20 = (!1);
            arr_6 [i_0] [i_1] = (var_3 < var_15);
        }
        var_21 = ((((65530 ? 58893 : 18446744073709551615))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            {
                var_22 = (((16404908592847208493 < (arr_9 [i_3 + 1] [i_3 + 1]))));
                arr_12 [16] [16] &= (((((18446744073709551615 ? var_14 : (arr_7 [i_3 - 1])))) && ((1 || ((min((arr_9 [i_3] [19]), (arr_7 [9]))))))));
                var_23 = (((~(min((arr_8 [18]), var_0)))) < var_13);
                var_24 -= var_8;
                var_25 = 1;
            }
        }
    }
    #pragma endscop
}

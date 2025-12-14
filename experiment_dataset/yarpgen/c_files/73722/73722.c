/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = arr_0 [i_0] [i_0];
        var_13 = ((((((~(-9223372036854775807 - 1))) != (min((arr_1 [i_0]), 1)))) ? (((((max((arr_0 [i_0] [i_0]), (-9223372036854775807 - 1))) != ((18446744073709551591 ^ (arr_1 [i_0]))))))) : (((-9223372036854775807 - 1) ? (arr_1 [i_0]) : 6860908745218242807))));
        var_14 = (min(((((((arr_1 [i_0]) ^ (arr_0 [i_0] [1])))) ? (min(1, 9223372036854775807)) : (arr_1 [i_0]))), (arr_1 [i_0])));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_15 = min(((1 ? -2262941484133789315 : 12118901736126713570)), ((max((arr_2 [i_1 - 1]), (arr_2 [i_1 + 1])))));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_16 = (((((var_1 * (arr_3 [i_2])))) ? (11585835328491308808 * 1) : (arr_5 [i_1] [i_1 - 2] [i_2 - 1])));
            var_17 = (~7420541179668969753);
            var_18 = ((((var_10 ? 2262941484133789325 : -2262941484133789326))) ? 15273913901411927518 : 6860908745218242806);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_19 = (11585835328491308808 ? 1712430296348671510 : (arr_8 [i_1 + 1]));
                var_20 = 3528100672620259102;
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
            {
                var_21 = ((-3779608246427045028 == var_7) < -9223372036854775798);
                var_22 = var_4;
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_23 = (arr_7 [i_1 - 2]);
                            var_24 = (!-1);
                        }
                    }
                }
                var_25 = (arr_16 [i_1] [i_1 + 1] [7] [i_1 - 1] [i_1 + 1] [i_5]);
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
            {
                var_26 = (~-9223372036854775804);
                var_27 = ((((((arr_18 [1] [i_3] [i_1 + 1]) >> (arr_12 [i_1] [i_1] [i_3])))) ? (200293071474589679 / -5627961715180700811) : (-9223372036854775807 - 1)));
            }
            var_28 = var_7;
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
        {
            var_29 = ((-(arr_11 [i_1 - 2] [i_1 + 1] [i_1] [i_1])));

            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                var_30 = ((((6860908745218242809 ? 8430982516351187104 : (arr_24 [i_10] [i_10]))) < 6860908745218242807));
                var_31 = (((~var_2) ? (((arr_12 [i_1] [i_1] [i_10]) ? (arr_14 [i_9] [i_9]) : var_9)) : 11584723230884220745));
                var_32 = 0;
                var_33 = (1498904946853524324 & 4431133341755397126);
            }
        }
    }
    var_34 = var_0;
    #pragma endscop
}

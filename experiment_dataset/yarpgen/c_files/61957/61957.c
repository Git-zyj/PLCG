/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (~((-118 ? 562949953421310 : 1077708234)));
                var_20 = (min((arr_4 [i_1 - 2] [i_1 - 2] [i_1]), ((var_8 ? var_3 : (var_5 && 1077708255)))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_21 = (((((-48 ? var_14 : var_7))) || var_1));
        var_22 = 77;
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        var_23 = (max((arr_4 [i_3] [i_3] [i_3]), (((2868974649 ? 0 : 1073709056)))));
        var_24 = ((var_12 & (arr_2 [i_3] [21] [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 11;i_5 += 1)
            {
                {
                    var_25 = var_0;
                    var_26 = ((8022947645539276434 ? -562949953421310 : 17));
                    arr_18 [i_3] [i_4 - 1] [i_4 + 1] = ((max((arr_12 [i_4]), var_15)));
                }
            }
        }

        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            arr_23 [i_3] [i_3] [i_3] = (arr_12 [i_3]);
            var_27 -= (max(var_1, (min((arr_19 [i_6 - 1] [i_6 + 1]), var_13))));

            for (int i_7 = 4; i_7 < 10;i_7 += 1)
            {
                var_28 &= (arr_5 [i_6 - 1] [i_6 + 1] [0]);
                arr_26 [i_3] [i_3] [i_3] = (((((var_12 ? var_7 : var_2))) ? (!var_3) : 255));
                arr_27 [i_3 + 2] [i_3] [i_6 - 1] [i_7] = var_6;
                var_29 = ((((((0 + 1073709056) - (min(var_3, 54137))))) ? ((var_1 ? (arr_24 [i_3 + 1]) : 0)) : (((-(var_1 - 0))))));
            }
            var_30 = (min(-7, ((9223372036854775807 ? 113 : -11))));
        }
        for (int i_8 = 3; i_8 < 9;i_8 += 1)
        {
            arr_31 [i_3] = -8022947645539276423;
            var_31 &= (min(var_12, ((67641772 ? -6397642301473105361 : 8022947645539276434))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    {
                        var_32 = (arr_14 [i_8 + 3]);
                        arr_39 [i_8] [i_3 + 2] [i_3 + 2] [i_3] = var_0;
                    }
                }
            }
            var_33 = ((!(((-8022947645539276434 ? (arr_3 [i_3]) : (arr_3 [i_3]))))));
        }
        var_34 = -562949953421310;
    }
    var_35 = (((((-8022947645539276425 > var_3) ? ((min(var_14, 1192959822))) : (min(var_11, var_5)))) >= var_12));
    var_36 &= (((var_8 < -8022947645539276465) ? var_1 : (((var_3 ? 48 : 22161)))));
    var_37 += (var_3 == var_4);
    #pragma endscop
}

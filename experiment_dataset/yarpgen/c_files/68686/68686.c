/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((max(-1885521238, 23)))));
    var_17 = (min(((((5646034991791018592 ? 4294967295 : var_5)))), ((((var_8 ^ (-127 - 1))) & 1))));

    for (int i_0 = 3; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = 16912284375346201763;
        arr_3 [i_0] = ((var_7 - (((min(((((arr_0 [i_0]) != 0))), (arr_1 [i_0])))))));
        arr_4 [i_0] [i_0] = var_9;
        var_18 = (max(var_18, ((((((var_10 >= (var_9 > var_8)))) | 0)))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_19 = (var_15 ^ ((var_5 ? -10451 : (-127 - 1))));
        var_20 = (((var_14 && -5798395751884649121) <= var_1));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 13;i_4 += 1)
                {
                    {
                        var_21 = (max(var_21, 0));
                        arr_16 [i_1] [i_2] [i_4] = (var_6 ? var_11 : (0 / 13));
                        var_22 ^= (((arr_9 [i_2 - 1] [i_1 - 3] [i_4 - 2]) ? -358932262 : var_8));
                        var_23 = (!var_12);
                    }
                }
            }
        }
    }

    for (int i_5 = 3; i_5 < 16;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    arr_23 [i_5] = (arr_19 [i_6] [i_7]);
                    var_24 = 27;
                    arr_24 [10] [i_6 + 3] [i_7] = (((((2008255895 | 1034501499) > (min(0, var_13))))) != (113 % 9));
                }
            }
        }
        arr_25 [i_5] = (max(((((-1 ? 1685289562 : 13466057371483254892)) << (176 / 672299140))), ((((3122110939 & 0) ? 4 : (arr_20 [4] [4]))))));
    }
    for (int i_8 = 3; i_8 < 16;i_8 += 1)
    {
        arr_29 [i_8] = (min(var_3, 1757258833));

        for (int i_9 = 3; i_9 < 16;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 0;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 19;i_11 += 1)
                {
                    {
                        arr_38 [i_8] [1] [1] [i_8] = (((709104421 ^ var_14) ? (max(var_2, (arr_36 [i_8 - 2] [i_9 + 2]))) : ((min((arr_36 [i_8 - 2] [i_9 - 3]), var_0)))));
                        var_25 = (min(var_13, ((((-(arr_32 [i_8] [i_9] [i_10] [i_10])))))));
                    }
                }
            }

            for (int i_12 = 1; i_12 < 19;i_12 += 1)
            {
                var_26 ^= (0 > 11554);
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 16;i_14 += 1)
                    {
                        {
                            arr_48 [i_8] [i_8] [i_12] [i_8] [i_14] = (((arr_28 [i_8] [i_8]) ^ -1120253233));
                            var_27 = (max(var_27, (max((min((!var_2), var_14)), (((-30 % var_4) % (var_5 % var_6)))))));
                        }
                    }
                }
                arr_49 [i_8] [i_8] [i_8] [i_8] = ((-107 | ((((var_8 ^ (arr_33 [i_8] [i_9] [3] [i_12]))) % (~2561673074)))));
                arr_50 [i_8] [i_8] [i_8] = ((min(var_0, (3 ^ var_15))));
            }
            for (int i_15 = 3; i_15 < 18;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 19;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        {
                            arr_60 [16] [10] [i_15] [i_16] [i_8] = ((((min((arr_44 [i_8]), var_6)) != var_12)));
                            var_28 = (max(var_28, (arr_43 [i_8] [i_8] [i_15] [i_16] [i_15] [i_15])));
                            var_29 += ((((((arr_42 [i_8] [i_8] [i_15] [i_15 + 2]) ^ var_0))) & var_1));
                            arr_61 [i_8] [13] [i_8] [i_8 + 4] [i_8] = ((56478 ? (((!((min(0, 1263460299)))))) : (((var_2 ? 4 : (arr_47 [i_8] [i_8] [i_8]))))));
                        }
                    }
                }
                arr_62 [i_8] = 14441742299453766298;
                arr_63 [i_8] [i_8] [i_15 - 1] = (min(((((max((arr_56 [i_9] [i_9] [i_9] [i_9] [i_8]), 36733))) ? 4447 : (min(var_15, (arr_31 [4] [i_15] [i_15]))))), 0));
            }
        }
        arr_64 [i_8] = 0;
        arr_65 [i_8] = ((((((arr_33 [13] [i_8 + 3] [i_8 - 3] [i_8]) > (var_5 + 0)))) != (min((arr_32 [i_8] [i_8] [i_8] [i_8]), (arr_51 [13] [i_8])))));
    }
    #pragma endscop
}

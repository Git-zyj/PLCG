/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = 15852138850390657085;
                var_18 += 26092;
                var_19 = (max(var_19, (((((((-2147483647 - 1) ? 1073741823 : 2830218359126216153))) & (((~var_4) & 51)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] = var_2;
                            var_20 = (max(var_20, (((!(((arr_11 [i_0 + 2] [i_3 + 1] [i_0 + 2] [i_3 - 1] [i_3] [i_2]) != 4620957096601701084)))))));
                        }
                    }
                }
                var_21 *= -174762773;
            }
        }
    }

    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 7;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    var_22 = ((~(arr_15 [i_5] [i_5 + 3])));
                    var_23 = ((99 ? (arr_14 [i_4]) : (((0 > (arr_1 [i_4]))))));
                }
            }
        }
        var_24 = ((((min(8360, (-99 >= 869553078)))) != -1));
        var_25 = (min(var_25, (((((min(51, (max(7677, -352774151))))) % (((arr_2 [i_4] [i_4]) ? (2594605223318894531 + 60) : (35095 == 17))))))));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 7;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    {
                        var_26 = (((9895568 & var_1) ? (var_8 | 1905411213) : -174762773));
                        var_27 = ((99 <= ((12 ? 13 : 18))));
                    }
                }
            }
            var_28 = 15852138850390657085;
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                {
                    var_29 = (arr_28 [i_4] [i_4] [i_10] [i_10] [i_11] [i_11]);
                    var_30 = (max(((((max(-7688231487797980884, var_6)) < var_13))), ((var_10 ? 43601 : 1))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 3; i_12 < 11;i_12 += 1)
    {
        var_31 = var_6;
        arr_36 [i_12] = 21490;
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 10;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                {
                    var_32 = (21490 - 584617355801781213);
                    var_33 = ((!(-1 - var_9)));
                    var_34 -= (((arr_0 [i_12 + 1]) | var_9));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 13;i_16 += 1)
                        {
                            {
                                var_35 &= (((arr_8 [i_12] [i_16] [i_16] [i_12]) > ((((var_3 > (arr_1 [i_12])))))));
                                var_36 = -9196320077026871528;
                                var_37 = (((arr_1 [i_12 - 1]) ? (-9196320077026871528 >= var_7) : (var_8 > 36)));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_17 = 0; i_17 < 11;i_17 += 1)
    {
        var_38 = ((8968 ? (((((-(arr_3 [i_17])))))) : 4294967277));
        arr_54 [i_17] = (((~(21504 & var_7))));
        var_39 -= ((((arr_49 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]) ? 170 : (~119148567))));
        arr_55 [i_17] [i_17] = ((((((-18095 ? -1548787917 : -1957623257062629832))) ? 3236673352584683494 : (4294967236 / 51))));
    }
    #pragma endscop
}

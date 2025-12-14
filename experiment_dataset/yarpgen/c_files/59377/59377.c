/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_19 = (arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 1]);
            var_20 = ((((((arr_1 [i_0] [i_1]) ? (-32767 - 1) : (arr_0 [i_0])))) ? -15 : (~var_15)));
            var_21 = (max(var_21, ((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))))));
        }
        var_22 = ((7756493296551511437 ? (((31 > (arr_2 [i_0])))) : (arr_3 [i_0 + 2])));
        var_23 = 0;
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_24 = (arr_1 [i_2] [i_2 + 2]);
        arr_8 [i_2] = (((arr_7 [i_2]) ? (arr_0 [i_2 + 2]) : (arr_0 [i_2 + 2])));
        var_25 = (((((-31 ? -32 : (arr_4 [i_2] [i_2] [i_2])))) ? (((arr_7 [i_2]) * 0)) : (arr_6 [i_2])));
        var_26 = (((((7756493296551511449 ? 1 : (arr_7 [i_2])))) ? ((12786657867581357067 ? 33057 : 0)) : (~32583)));
        arr_9 [i_2] = (((((0 || (arr_2 [i_2])))) > (arr_7 [i_2])));
    }
    var_27 = ((-(max((12786657867581357067 + 24), 12))));
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 8;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 6;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 7;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 7;i_7 += 1)
                        {
                            {
                                arr_24 [i_3] [i_5] [i_3] = ((((max((max(87, (arr_15 [i_7] [i_3]))), 1))) ? ((((0 | 5) ? 0 : ((-31 ? (arr_10 [i_3] [1]) : -31216))))) : 17655963720455858794));
                                arr_25 [9] [9] [i_3] [i_6] [i_6] [i_7] = (((arr_22 [i_6] [i_6 + 3] [i_6] [i_6 - 2] [i_3]) / (1 && 13615177964932661940)));
                                var_28 = (min(var_28, (((!((((366620433 >= 3733) ? (~14) : ((30 ? (arr_23 [i_3] [i_4] [i_5] [i_5] [i_4]) : (arr_19 [i_5] [i_6])))))))))));
                            }
                        }
                    }
                }
                arr_26 [i_3] [i_3] [i_3] = ((-((~(1944187481 != -40)))));
            }
        }
    }
    #pragma endscop
}

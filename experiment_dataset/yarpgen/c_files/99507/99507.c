/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_17 = 1809077209;
        var_18 -= (((~13294) < (arr_0 [i_0])));
        var_19 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_20 |= (min((arr_1 [i_1]), (min((((arr_1 [i_1]) << (((arr_2 [6] [i_1]) - 15762059261252732905)))), (32750 < 6373741590062657968)))));
        var_21 = (max((((-(((arr_1 [i_1]) << (arr_1 [i_1])))))), 899837077));
        var_22 &= (((arr_2 [i_1] [i_1]) ^ (((((max((arr_2 [i_1] [i_1]), 12073002483646893648)) == (((52241 << (3710 - 3699))))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_6 [i_2] = 12073002483646893647;
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 9;i_4 += 1)
            {
                {
                    var_23 = (((arr_4 [i_4] [i_4]) << ((((arr_10 [i_2] [i_4] [i_4 + 3] [i_3]) == 52246)))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_2] [i_3] [i_2] [i_2] = (arr_11 [i_2] [i_3] [i_4] [i_5] [i_3] [i_6]);
                                var_24 = (((~4607182418800017408) < 9223372036854775807));
                                var_25 = (arr_14 [i_6] [i_5] [i_4] [i_3 - 1]);
                            }
                        }
                    }
                }
            }
        }
        arr_19 [i_2] = ((arr_10 [8] [i_2] [i_2] [i_2]) == (arr_5 [i_2]));
        arr_20 [i_2] [i_2] = (((arr_8 [i_2]) << (-32224 - 4294935071)));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            {
                arr_27 [i_8] = (max(((2532562589 << (((arr_25 [i_8] [i_8] [i_7]) - 34332)))), ((max((arr_21 [i_7]), (arr_21 [i_8]))))));
                arr_28 [i_7] [i_7] [i_7] = (arr_21 [i_7]);
                var_26 |= (((min((arr_25 [i_7] [i_7] [i_8]), ((1895790946 << (((arr_22 [i_7]) + 4746)))))) == (((+(((arr_25 [i_7] [7] [i_7]) ^ 1)))))));

                for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                {
                    var_27 = (((((max(32767, 32)))) ^ (max((arr_29 [i_8] [i_8] [i_9] [i_7]), (arr_24 [i_7])))));
                    var_28 -= (arr_22 [i_8]);
                }
                for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                {
                    var_29 = -3343;
                    arr_35 [6] = ((((12073002483646893641 == (arr_25 [i_7] [10] [10])))));
                    var_30 = (max(var_30, 163));
                    var_31 &= (50124 << (9223372036854775807 - 9223372036854775804));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    var_32 = (max(var_32, (!13293)));
                    var_33 = 35522;
                }
            }
        }
    }
    #pragma endscop
}

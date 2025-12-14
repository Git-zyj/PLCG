/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_4] [i_3] [i_4] [i_3] &= 27197;
                                arr_15 [i_2] [i_1] = (max((max(((3433851596393234772 ? -31 : -9223372036854775805)), (((var_4 ? 15643 : (arr_4 [i_4])))))), ((((!0) && 1)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_19 = (max((min((151 == var_4), (arr_21 [i_0] [i_1] [i_2]))), ((((1 ^ var_3) <= (arr_11 [i_0] [i_1] [i_2] [i_2] [i_6] [i_5] [i_6]))))));
                                arr_22 [i_2] [i_2] = 61;
                                arr_23 [i_6] [i_2] [i_2] [i_2] [i_2] [i_0] = -var_3;
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {
                        arr_37 [i_7] [i_8] [i_9] [i_10] [i_10] = (max((((arr_11 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_7] [i_8 - 1] [i_8 - 1] [i_8 - 1]) && (arr_11 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_7] [i_8 - 1] [i_8 - 1] [i_8 - 1]))), var_2));
                        arr_38 [i_7] [i_8] [i_9] = (((arr_24 [i_9] [i_10]) % ((-2334748780299708163 ? 789522531 : 19))));
                        arr_39 [i_9] [i_8] [i_9] [i_10] |= ((!((max(-75, 2187624384)))));
                        arr_40 [i_7] = (((arr_19 [i_7]) ? ((max(98450125, var_18))) : (((-20126 / 7307) ? -28 : (arr_12 [i_10] [i_9] [i_8] [i_7])))));
                    }
                }
            }
        }
        arr_41 [i_7] [i_7] = (min((((((min((arr_27 [i_7]), var_9))) && (4095 >= 0)))), (max(((251 + (arr_7 [i_7] [i_7] [i_7]))), 31))));
    }

    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        var_20 -= var_9;
        arr_44 [i_11] &= var_1;
        arr_45 [i_11] = ((((max((~0), var_5))) ? (~48239) : ((max((arr_11 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]), (arr_11 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))))));
    }
    #pragma endscop
}

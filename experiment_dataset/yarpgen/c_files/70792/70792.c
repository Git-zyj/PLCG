/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (min(127, ((((arr_0 [i_0]) || (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = ((((((arr_3 [i_2 - 2] [i_2 + 1] [10]) ? (arr_6 [i_2 - 1] [i_2 - 1] [i_2]) : 6262450626437782484))) ? (((((arr_6 [i_0] [i_0] [i_2]) || (arr_6 [i_0] [i_0] [i_2 + 1]))))) : (min(6262450626437782484, (arr_5 [i_2 - 2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = (max(((((min((arr_11 [i_3 + 1] [i_2] [i_1] [i_0]), (arr_5 [i_3 + 2])))) ? 127 : (127 < 494457608))), (arr_3 [i_2 - 2] [i_2 - 2] [i_3 + 1])));
                                var_19 = (min(((-1 ? 12184293447271769137 : (((((arr_6 [i_0] [i_0] [i_0]) <= 1)))))), 144));
                                arr_16 [i_2] [i_2] [i_2] [i_1] [i_2] [i_0] [i_3 - 2] = ((!((min(6896655057016190327, 1)))));
                                arr_17 [i_2 - 2] [i_3] [i_1] [i_3] [i_3 + 3] = 1;
                                arr_18 [i_0] [i_0] [i_1] = (((((1 ? ((-1 ? -763573103 : 12184293447271769132)) : (((~(arr_1 [i_4]))))))) ? ((~(arr_3 [i_2] [i_3] [i_3]))) : 31));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_0] = ((((((min(-309593029, 7))) ? (arr_24 [i_7] [i_0] [i_5] [i_0]) : (arr_0 [i_0]))) > ((-(arr_0 [i_0])))));
                        var_20 = ((((((arr_13 [i_6]) / (arr_13 [i_0])))) ? (arr_13 [i_0]) : -255));
                        arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((!(((~(arr_6 [i_5] [i_5] [i_5])))))) ? ((18446744073709551615 ? (arr_4 [i_0] [i_0]) : (65535 & 52))) : ((~((~(arr_27 [i_0] [i_0])))))));
                    }
                }
            }
        }
        var_21 = (arr_1 [i_0]);
    }
    var_22 = (-(min(((var_11 ? -70 : var_11)), 1)));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((var_1 | var_4), (max(var_10, var_19))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0 - 1] [i_0 - 1] = (((((!(((-(arr_1 [i_0]))))))) % (((max((arr_2 [i_0 + 1]), (arr_2 [4])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        var_21 *= arr_2 [i_0];
                        arr_13 [i_0] [i_0] [9] [13] = (((min(2218114930, -53)) % -2218114949));
                    }
                    var_22 = ((((((!var_17) % (arr_5 [i_0 - 1] [i_0 - 1])))) ? (arr_2 [i_1]) : (((-var_0 ^ ((min((arr_6 [i_0] [i_1] [i_1]), var_0))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_23 = ((+((((min((arr_19 [i_0]), (arr_14 [i_2] [i_0 + 1])))) & var_5))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_4] [i_2] = ((-(max(((2218114930 << (46 - 35))), ((((arr_18 [i_0 - 1] [2] [i_0] [4] [2] [4] [4]) | (arr_6 [i_0] [i_2] [i_2]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_24 |= ((+((((arr_9 [i_6] [i_6 + 2] [i_6 + 1] [i_7]) != var_2)))));
                                var_25 = ((-((((-47 == -47) <= (max(var_5, var_1)))))));
                            }
                        }
                    }
                }
            }
        }
        arr_27 [i_0] |= (~var_5);
        var_26 = ((-(~47)));
        var_27 = (max(var_27, 53));
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        var_28 = (-(!46));
        var_29 = (((((arr_30 [i_8]) ? (((arr_30 [i_8]) ^ (arr_31 [i_8] [i_8]))) : ((((arr_29 [i_8]) < (arr_31 [i_8] [i_8])))))) <= (max(-48, var_19))));
    }
    #pragma endscop
}

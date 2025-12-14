/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((1 ? 244 : ((917384999 ? 17473504614610496074 : 77438428975918376)))) - (917384985 + 917384985)));
    var_17 = (var_12 ? (max((max(var_8, 917384994)), var_12)) : var_1);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = (((min((min(240, var_8)), 43364))) ? ((((max((arr_1 [0]), (arr_0 [2] [i_0])))) ? ((var_4 ? -917384980 : var_7)) : (arr_1 [0]))) : 59);
        var_19 = (((max(((197 ? (arr_1 [1]) : (arr_0 [i_0] [i_0]))), (arr_1 [i_0]))) < ((((((arr_1 [i_0]) | var_1)) <= (max((arr_1 [i_0]), (arr_1 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_14 [i_4] = (((184 == 30055) && (arr_4 [i_1 + 1])));
                                var_20 = ((((var_11 << (var_15 + 7788346060475928150)))) ? (((var_4 ? 6 : (arr_4 [2])))) : ((197 ? var_6 : var_5)));
                                arr_15 [i_1] [17] [i_4] = (((arr_5 [i_4] [i_3]) && 233));
                                var_21 = var_1;
                            }
                        }
                    }
                    arr_16 [5] [22] [13] [i_1] = ((var_11 ? (arr_10 [i_1 - 1] [i_3 + 1] [i_1] [i_3]) : var_10));

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        arr_19 [15] [i_1] [i_2] [16] [0] [i_6] = (arr_11 [11] [i_1 - 2] [i_3 - 1] [i_3]);
                        arr_20 [i_6] [5] [1] [i_2] = ((((-30055 <= (arr_8 [i_2] [i_2] [i_2]))) ? ((((arr_5 [9] [6]) >= (arr_4 [1])))) : (arr_4 [i_1])));
                        var_22 = (arr_8 [i_1 - 1] [i_3 - 1] [i_3]);
                    }
                    var_23 &= (((arr_18 [i_2] [i_3 + 2]) ? (arr_4 [i_2]) : (arr_18 [i_2] [i_1 + 2])));
                }
            }
        }
        arr_21 [i_1] [13] = ((((arr_5 [15] [1]) % 73)));
    }
    #pragma endscop
}

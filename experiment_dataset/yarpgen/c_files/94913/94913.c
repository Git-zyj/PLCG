/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (22 >> 1);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 = (arr_1 [6]);
        var_22 = (min(var_22, (((!((!(arr_0 [0]))))))));
        var_23 = (max((var_19 | var_8), ((max(var_15, var_14)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_24 = var_8;
                                arr_15 [1] [7] [1] [i_3] [10] [4] = (((arr_13 [i_5 + 3] [5] [8] [6] [i_5 - 1]) ? var_7 : ((((max(var_13, var_19))) ? var_14 : ((~(arr_12 [1] [1] [i_3] [0] [11])))))));
                                var_25 = ((var_14 << (((((max(var_7, var_6)))) - 50))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_20 [10] [5] [6] [1] [i_3] [1] = ((max(((3144443897 ? var_13 : var_12), (arr_8 [i_6 + 1] [5] [0] [i_6 - 1])))));
                                var_26 *= ((!((min(((min((arr_3 [1]), var_16))), (max(var_4, 18081)))))));
                            }
                        }
                    }
                }
            }
        }
        var_27 = ((var_18 ? (max(((var_1 ? 14672034532807446428 : 287104476244869120)), ((4294966784 ? (arr_2 [1]) : var_4)))) : -6039697507651740436));
    }
    #pragma endscop
}

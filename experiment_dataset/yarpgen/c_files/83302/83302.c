/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_14 += ((-5364800283646989862 != (((((arr_1 [9] [i_0]) << (((arr_0 [0]) - 573917131430430587)))) - (arr_1 [i_0] [i_0])))));
        var_15 |= -9022571259509253465;
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 8;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_16 = min(((236 ? (arr_6 [i_1 + 1] [i_1 + 1]) : -3384226016512334471)), (arr_0 [10]));
                arr_7 [i_1] [i_1] [i_1] = 65526;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_17 = (max(var_17, ((((((((arr_0 [i_3]) ? (arr_2 [i_2] [i_3]) : (arr_1 [9] [9]))))) >= (max(32, 918633470)))))));
                            var_18 = ((1 ? ((max((((1 <= (arr_12 [10] [10] [10] [6] [i_3] [i_3])))), ((2229758409791294980 ? var_12 : (arr_5 [2])))))) : ((min((arr_0 [i_3]), 1)))));
                            var_19 += ((((((arr_0 [i_3]) - (arr_0 [i_3])))) ? ((max((arr_12 [i_1] [i_1] [i_1 - 3] [i_1 + 2] [3] [i_1]), (arr_12 [i_1] [i_1] [i_1 - 2] [i_1 + 4] [i_1] [1])))) : (((arr_12 [i_1] [i_1] [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 3]) << (arr_12 [i_1] [i_1 + 2] [i_1 + 2] [i_1 + 4] [i_1 + 3] [1])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

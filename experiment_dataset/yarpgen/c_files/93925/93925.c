/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_1] = ((((~(((((arr_0 [1]) + 2147483647)) >> (((arr_2 [i_0] [i_1]) - 23254)))))) >= 1));
                arr_6 [i_0] [i_1] = 1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_19 = (min(var_19, (((1 ? ((max((arr_4 [i_0] [i_0]), 4))) : (((!(((~(arr_3 [i_0] [i_1] [1]))))))))))));
                            var_20 -= ((~(!-var_3)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {
                            var_21 = (!var_8);
                            arr_18 [i_4] [0] [i_1] [i_1] [i_4] [i_1] = -3451763491074988812;
                        }
                    }
                }
                arr_19 [1] [i_1] [i_1] = (((min(-3451763491074988810, (arr_0 [i_0]))) > ((((arr_2 [i_0] [i_0]) ? ((~(arr_2 [i_0] [2]))) : (!23151))))));
            }
        }
    }
    var_22 &= var_3;
    #pragma endscop
}
